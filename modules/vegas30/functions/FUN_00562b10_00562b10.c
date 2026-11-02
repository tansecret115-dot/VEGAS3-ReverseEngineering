/* Module: vegas30.exe
   Function: FUN_00562b10
   Address: 00562b10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00562b10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *local_4;
  
  puVar1 = (uint *)FUN_005624d0(&DAT_0064b538);
  uVar3 = 0;
  local_4 = (int *)0x0;
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  iVar2 = FUN_00562af0(puVar1,&DAT_0061b2a8,&local_4);
  if (-1 < iVar2) {
    if ((*puVar1 & 0x100) == 0) {
      iVar2 = FUN_00562a50(&DAT_0064b538,param_2,*(undefined4 *)(param_3 + 0x18),
                           *(undefined4 *)(param_3 + 0x1c));
      if (iVar2 < 0) goto LAB_00562b8d;
    }
    if (param_4 == 0) {
      uVar3 = *puVar1 >> 8;
    }
    else {
      uVar3 = (**(code **)(*local_4 + 0x10))(local_4,1);
    }
    uVar3 = uVar3 & 1;
  }
LAB_00562b8d:
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  FUN_00562540(&DAT_0064b538,puVar1);
  return uVar3;
}


