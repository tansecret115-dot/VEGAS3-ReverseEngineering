/* Module: vidcap30.exe
   Function: FUN_004227d0
   Address: 004227d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004227d0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  
  iVar1 = param_1;
  uVar3 = 0;
  if ((((*(uint *)(param_1 + 0x14c) & 0x10) == 0) && (DAT_005bb430 != 0)) &&
     (piVar4 = *(int **)(param_1 + 0x3b0), piVar4 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4,&param_1);
    if (iVar2 == 0) {
      iVar2 = 4;
      bVar6 = true;
      piVar4 = &DAT_005a2ba8;
      piVar5 = (int *)(unaff_EBX + 0x2c);
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        uVar7 = ftol();
        *(undefined8 *)(*(int *)(unaff_EBX + 0x44) + 0x28) = uVar7;
        uVar3 = (**(code **)(**(int **)(iVar1 + 0x3b0) + 0xc))(*(int **)(iVar1 + 0x3b0),unaff_EBX);
      }
      FUN_0057b1c0(unaff_EBX);
    }
  }
  return uVar3;
}


