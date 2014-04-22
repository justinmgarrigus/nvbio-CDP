/*
 * Copyright (c) 2014, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA CORPORATION and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA CORPORATION is strictly prohibited.
 *
 *
 *
 *
 *
 *
 *
 *
 */

#pragma once

#define DO_OPTIONAL_SYNCHRONIZE 1

void gpu_init(void);


inline void optional_device_synchronize()
{
#if DO_OPTIONAL_SYNCHRONIZE
    cudaDeviceSynchronize();
#endif
}
