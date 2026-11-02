/* Module: mp3plug.dll
   Function: FUN_5f68e870
   Address: 5f68e870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f68e870(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EDI;
  int *piVar4;
  
  iVar1 = param_1;
  piVar4 = *(int **)(param_1 + 0x1c);
  iVar2 = (**(code **)*piVar4)(piVar4,&DAT_5f72bd50,&param_1);
  if (-1 < iVar2) {
    uVar3 = (**(code **)(*unaff_EDI + 0x18))(unaff_EDI,0x2716,1);
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
    (**(code **)(*piVar4 + 8))(piVar4);
    DAT_5f73cca0 = *(undefined4 *)(iVar1 + 0x30);
  }
  uVar3 = 1;
  if (*(int *)(iVar1 + 0x30) != 0) {
    uVar3 = 2;
  }
  return uVar3;
}


