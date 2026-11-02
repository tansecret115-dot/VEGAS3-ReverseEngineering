/* Module: vegas30.exe
   Function: FUN_0057b2c0
   Address: 0057b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057b2c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = _SfList_IsListFast_4(param_1);
  if (iVar2 != 0) {
    if (param_1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *param_1;
    }
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = param_1[2];
        iVar3 = param_1[1] * iVar4;
        _SfDibFree_8(*(undefined4 *)(iVar3 + 0x1c + iVar1),0);
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar3 + iVar1 + 0x1c) = 0;
      } while (iVar4 < iVar2);
    }
    _SfList_Destroy_4(param_1);
    return;
  }
  return;
}


