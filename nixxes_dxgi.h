#pragma once

#include "nixxes_shared.h"

#include <cstdint>
#include <dxgi.h>

namespace nx {
    class INxDXGI {
    public:
        static INxDXGI *Instance();

        // @formatter:off
        virtual ~INxDXGI() = 0;
        virtual void Initialize() = 0;
        virtual void INxDXGI_Unk10() = 0;
        virtual void DestroySwapChain() = 0;
        virtual void ResizeSwapChain() = 0;
        virtual bool IsSwapChainFullScreen() = 0;
        virtual void SetSwapChainFullScreen() = 0;
        virtual void INxDXGI_Unk38() = 0;
        virtual void SetColorSpace() = 0;
        virtual void INxDXGI_Unk48() = 0;
        virtual void Present() = 0;
        virtual void INxDXGI_Unk58() = 0;
        virtual void INxDXGI_Unk60() = 0;
        virtual void INxDXGI_Unk68() = 0;
        virtual void INxDXGI_Unk70() = 0;
        virtual void INxDXGI_Unk78() = 0;
        virtual void INxDXGI_Unk80() = 0;
        virtual void GetDXGIFactory1() = 0;
        virtual void INxDXGI_Unk90() = 0;
        virtual void INxDXGI_Unk98() = 0;
        virtual void INxDXGI_UnkA0() = 0;
        virtual void INxDXGI_UnkA8() = 0;
        virtual void INxDXGI_UnkB0() = 0;
        virtual void INxDXGI_UnkB8() = 0;
        virtual void INxDXGI_UnkC0() = 0;
        // @formatter:on
    };

    class NxDXGIImpl : public INxDXGI {
    public:
        uint8_t Unk08[0x28];
        IDXGISwapChain *SwapChain;
        uint8_t Unk38[0xB8];
    };

    assert_size(NxDXGIImpl, 0xF0);
    assert_offset(NxDXGIImpl, SwapChain, 0x30);
}
