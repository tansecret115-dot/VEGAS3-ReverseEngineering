/* Module: vegas30.exe
   Function: FUN_0049b100
   Address: 0049b100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049b100(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != (int *)0x0) && ((int *)*param_2 != (int *)0x0)) {
    iVar1 = *(int *)*param_2;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*param_2 + 8) + iVar3 * 4);
        *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfe7fffff;
        iVar3 = iVar3 + 1;
        *(uint *)(iVar2 + 0x58) = *(uint *)(iVar2 + 0x58) & 0xfffffdff;
      } while (iVar3 < iVar1);
    }
    _SfList_Destroy_4(*param_2);
    *param_2 = 0;
  }
  return;
}


