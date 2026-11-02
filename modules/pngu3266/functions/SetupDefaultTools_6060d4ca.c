/* Module: pngu3266.dll
   Function: SetupDefaultTools
   Address: 6060d4ca
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNDC::SetupDefaultTools(void) */

void __thiscall XPNDC::SetupDefaultTools(XPNDC *this)

{
                    /* 0x1d4ca  2057  ?SetupDefaultTools@XPNDC@@QAEXXZ */
  *(undefined4 *)(this + 0x1b3) = 0;
  (**(code **)(*(int *)this + 0x9c))(this + 0x2c);
  *(XPNDC **)(this + 8) = this + 0x2c;
  (**(code **)(*(int *)this + 0x98))(this + 0x97);
  *(XPNDC **)(this + 0xc) = this + 0x97;
  (**(code **)(*(int *)this + 0xa0))(this + 0x101);
  *(XPNDC **)(this + 0x14) = this + 0x101;
  (**(code **)(*(int *)this + 0xa4))(this + 0x135);
  *(XPNDC **)(this + 0x18) = this + 0x135;
  (**(code **)(*(int *)this + 0xa8))(this + 0xce);
  *(XPNDC **)(this + 0x10) = this + 0xce;
  (**(code **)(*(int *)this + 0xac))(this + 0x149);
  *(XPNDC **)(this + 0x1c) = this + 0x149;
  (**(code **)(*(int *)this + 0xb0))(this + 0x168);
  *(XPNDC **)(this + 0x20) = this + 0x168;
  (**(code **)(*(int *)this + 0xb4))(this + 0x187);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x187);
  (**(code **)(*(int *)this + 0xb8))(this + 0x18b);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x18b);
  CPNGraphicResource::LockResource(*(CPNGraphicResource **)(this + 8));
  CPNGraphicResource::LockResource(*(CPNGraphicResource **)(this + 0xc));
  CPNGraphicResource::LockResource(*(CPNGraphicResource **)(this + 0x14));
  CPNGraphicResource::LockResource(*(CPNGraphicResource **)(this + 0x18));
  CPNGraphicResource::LockResource(*(CPNGraphicResource **)(this + 0x10));
  return;
}


