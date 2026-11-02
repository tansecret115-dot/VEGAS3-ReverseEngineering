/* Module: pngu3266.dll
   Function: HandleEvent
   Address: 6061712c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNScrollHelper::HandleEvent(class CPNEvent &) */

void __thiscall CPNScrollHelper::HandleEvent(CPNScrollHelper *this,CPNEvent *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CPNScrollHelper *local_c;
  CPNScrollHelper *local_8;
  
                    /* 0x2712c  1438  ?HandleEvent@CPNScrollHelper@@UAEXAAVCPNEvent@@@Z */
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 100) {
    local_c = (CPNScrollHelper *)(int)*(short *)(param_1 + 0x20);
    local_8 = (CPNScrollHelper *)(int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
    OnMouseMove(this,(CPNxPoint *)&local_c);
  }
  else if (iVar1 == 0x65) {
    local_c = (CPNScrollHelper *)(int)*(short *)(param_1 + 0x20);
    local_8 = (CPNScrollHelper *)(int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
    if ((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10) == 0) {
      OnPrimaryButtonDown(this,(CPNxPoint *)&local_c,(ushort)*(undefined4 *)(param_1 + 0x1c));
    }
  }
  else {
    if (iVar1 == 0x66) {
      local_c = (CPNScrollHelper *)(int)*(short *)(param_1 + 0x20);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      local_8 = (CPNScrollHelper *)(int)(short)((uint)*(undefined4 *)(param_1 + 0x20) >> 0x10);
      if ((short)((uint)uVar2 >> 0x10) != 0) {
        return;
      }
    }
    else {
      if (iVar1 != 0xa9) {
        return;
      }
      uVar2 = 0;
      local_c = this;
      local_8 = this;
    }
    OnPrimaryButtonUp(this,(CPNxPoint *)&local_c,(ushort)uVar2);
  }
  return;
}


