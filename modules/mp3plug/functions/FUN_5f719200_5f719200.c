/* Module: mp3plug.dll
   Function: FUN_5f719200
   Address: 5f719200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f719200(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar2 = (int)param_1 + iVar3;
    iVar1 = (int)param_1 + iVar3 + 0x800;
    iVar4 = (iVar1 - iVar2 & 0xfffffff8U) + iVar2;
    for (; iVar2 < iVar4; iVar2 = iVar2 + 8) {
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    for (; iVar2 < iVar1; iVar2 = iVar2 + 4) {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    iVar3 = iVar3 + 0x800;
  } while (iVar3 < 0x1000);
  *param_1 = 0x20;
  return;
}


