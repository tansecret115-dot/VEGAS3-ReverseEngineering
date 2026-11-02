/* Module: sftrans1.dll
   Function: FUN_00528760
   Address: 00528760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00528760(int param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  
  pt.y = param_4;
  pt.x = param_3;
  BVar1 = PtInRect((RECT *)(param_1 + 0x24),pt);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    return 0;
  }
  pt_00.y = param_4;
  pt_00.x = param_3;
  BVar1 = PtInRect((RECT *)(param_1 + 0x34),pt_00);
  if (BVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return 0;
}


