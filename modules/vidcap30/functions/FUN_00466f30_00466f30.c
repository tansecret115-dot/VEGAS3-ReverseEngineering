/* Module: vidcap30.exe
   Function: FUN_00466f30
   Address: 00466f30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00466f30(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  undefined4 *unaff_retaddr;
  int *piVar7;
  
  piVar7 = param_2;
  puVar4 = &param_2;
  iVar1 = (**(code **)(*param_2 + 0x34))(param_2,puVar4);
  if (iVar1 == 0) {
    iVar1 = 4;
    bVar6 = true;
    piVar3 = (int *)(param_1 + 0x2c);
    piVar5 = &DAT_005a2b58;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar6 = *piVar3 == *piVar5;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      puVar4 = *(undefined4 **)(param_1 + 0x44);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *unaff_retaddr = *puVar4;
        puVar4 = puVar4 + 1;
        unaff_retaddr = unaff_retaddr + 1;
      }
      return 1;
    }
  }
  iVar1 = (**(code **)(*piVar7 + 0xc))(piVar7,&stack0xfffffff4);
  if (-1 < iVar1) {
    uVar2 = (**(code **)(*piVar7 + 0x2c))(piVar7,unaff_EBX,param_1);
    FUN_00461560(puVar4,uVar2,piVar7,unaff_EBX);
    return 1;
  }
  return 0;
}


