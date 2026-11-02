/* Module: aviplug.dll
   Function: FUN_5f936f20
   Address: 5f936f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f936f20(undefined4 param_1,int param_2,uint param_3,int *param_4,byte param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_ESI;
  undefined *unaff_retaddr;
  
  if (5 < param_3) {
    return 0x80004005;
  }
  puVar2 = (undefined *)0x0;
  iVar3 = 0;
  if (((param_5 & 1) == 0) || ((&PTR_DAT_5f9f1a04)[param_3 * 0x10b] == (undefined *)0x0)) {
    puVar2 = (&PTR_DAT_5f9f1a04)[param_3 * 0x10b];
    iVar3 = *(int *)(param_2 + 0x424);
    (&PTR_DAT_5f9f1a04)[param_3 * 0x10b] = (undefined *)0x0;
    *(undefined4 *)(param_2 + 0x424) = 0;
  }
  if (((param_5 & 2) == 0) || ((&PTR_DAT_5f9f1a08)[param_3 * 0x10b] == (undefined *)0x0)) {
    (&PTR_DAT_5f9f1a08)[param_3 * 0x10b] = (undefined *)0x0;
    *(undefined4 *)(param_2 + 0x428) = 0;
  }
  uVar1 = (**(code **)(*param_4 + 0x14))(param_4,param_2,&DAT_5f9f15e0 + param_3 * 0x42c);
  if (puVar2 != (undefined *)0x0) {
    (&PTR_DAT_5f9f1a04)[param_3 * 0x10b] = puVar2;
  }
  if (iVar3 != 0) {
    *(int *)(param_2 + 0x424) = iVar3;
  }
  if (unaff_retaddr != (undefined *)0x0) {
    (&PTR_DAT_5f9f1a08)[param_3 * 0x10b] = unaff_retaddr;
  }
  if (unaff_ESI != 0) {
    *(int *)(param_2 + 0x428) = unaff_ESI;
  }
  return uVar1;
}


