/* Module: pngu3266.dll
   Function: CleanupDefaultTools
   Address: 6060d2d3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNDC::CleanupDefaultTools(void) */

void __thiscall XPNDC::CleanupDefaultTools(XPNDC *this)

{
                    /* 0x1d2d3  854  ?CleanupDefaultTools@XPNDC@@UAEXXZ */
  if (*(CPNGraphicResource **)(this + 0xc) != (CPNGraphicResource *)0x0) {
    CPNGraphicResource::UnLockResource(*(CPNGraphicResource **)(this + 0xc));
  }
  if (*(CPNGraphicResource **)(this + 8) != (CPNGraphicResource *)0x0) {
    CPNGraphicResource::UnLockResource(*(CPNGraphicResource **)(this + 8));
  }
  if (*(CPNGraphicResource **)(this + 0x14) != (CPNGraphicResource *)0x0) {
    CPNGraphicResource::UnLockResource(*(CPNGraphicResource **)(this + 0x14));
  }
  if (*(CPNGraphicResource **)(this + 0x18) != (CPNGraphicResource *)0x0) {
    CPNGraphicResource::UnLockResource(*(CPNGraphicResource **)(this + 0x18));
  }
  if (*(CPNGraphicResource **)(this + 0x10) != (CPNGraphicResource *)0x0) {
    CPNGraphicResource::UnLockResource(*(CPNGraphicResource **)(this + 0x10));
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


