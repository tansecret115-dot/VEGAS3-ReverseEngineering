/* Module: vegas30.exe
   Function: FUN_004ca5c0
   Address: 004ca5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ca5c0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x18) = (param_5 & 1) << 0x14 | *(uint *)(param_1 + 0x18) & 0xffefffff;
  if (param_2 != 0) {
    if (param_4 < 0) {
      uVar1 = *(uint *)(param_1 + 0xbb0);
      uVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) >> 1;
      lVar2 = (longlong)param_3 * (longlong)*(int *)(param_1 + 0xbac);
      if (lVar2 < 0) {
        lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)((uint)lVar2 < uVar3),
                         (uint)lVar2 - uVar3);
        uVar3 = 0;
      }
      param_4 = (int)((longlong)(lVar2 + (ulonglong)uVar3) / (longlong)(int)uVar1);
    }
    if (param_4 < 0x18) {
      param_4 = 0x18;
    }
    else if (500 < param_4) {
      param_4 = 500;
    }
    if ((*(int *)(param_2 + 0x694) != param_4) || (param_5 == 0)) {
      *(int *)(param_2 + 0x694) = param_4;
      *(undefined4 *)(param_2 + 0x698) = 0;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffffef;
      FUN_00456c20(param_1);
      *(uint *)**(undefined4 **)(param_1 + 0xbc8) =
           *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x10;
    }
  }
  return;
}


