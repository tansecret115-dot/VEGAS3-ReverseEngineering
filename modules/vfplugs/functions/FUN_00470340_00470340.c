/* Module: vfplugs.dll
   Function: FUN_00470340
   Address: 00470340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00470340(void *this,undefined4 param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect((RECT *)((int)this + 0x24),pt);
  if (BVar1 != 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
    return 0;
  }
  pt_00.y = param_3;
  pt_00.x = param_2;
  BVar1 = PtInRect((RECT *)((int)this + 0x34),pt_00);
  if (BVar1 != 0) {
    *(undefined4 *)((int)this + 0x18) = 1;
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  return 0;
}


