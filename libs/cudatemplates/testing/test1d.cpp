err |= test_array_copy2<Cuda::HostMemoryHeap<float, 1>, Cuda::HostMemoryHeap<double, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryHeap<double, 1>, Cuda::HostMemoryHeap<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 1>, Cuda::HostMemoryHeap<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 1>, Cuda::HostMemoryLocked<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 1>, Cuda::DeviceMemoryLinear<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryHeap<float, 1>, Cuda::Array<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 1>, Cuda::HostMemoryHeap<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 1>, Cuda::HostMemoryLocked<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 1>, Cuda::DeviceMemoryLinear<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::HostMemoryLocked<float, 1>, Cuda::Array<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 1>, Cuda::HostMemoryHeap<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 1>, Cuda::HostMemoryLocked<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 1>, Cuda::DeviceMemoryLinear<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::DeviceMemoryLinear<float, 1>, Cuda::Array<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::Array<float, 1>, Cuda::HostMemoryHeap<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::Array<float, 1>, Cuda::HostMemoryLocked<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::Array<float, 1>, Cuda::DeviceMemoryLinear<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);
err |= test_array_copy2<Cuda::Array<float, 1>, Cuda::Array<float, 1> >(size1a, size1b, pos1a, pos1b, size1, smax1);