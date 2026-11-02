/* Module: sfmarket2.dll
   Function: FUN_0042e3b0
   Address: 0042e3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e3b0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  int *unaff_retaddr;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *local_4;
  
  puVar1 = param_6;
  *param_6 = 0;
  piVar4 = (int *)&DAT_00495f38;
  local_4 = (undefined4 *)0x0;
  iVar2 = (**(code **)*param_2)(param_2,&DAT_00495f38,&local_4);
  if (-1 < iVar2) {
    param_3 = 0;
    iVar2 = (**(code **)(*unaff_EBX + 0xbc))(unaff_EBX,unaff_retaddr,&param_3);
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)local_4[1];
      iVar2 = (**(code **)(*unaff_retaddr + 0xb4))
                        (unaff_retaddr,unaff_EBX,*local_4,puVar3,local_4[2],local_4[3]);
      if (-1 < iVar2) {
        iVar2 = FUN_0042e1f0(puVar3,piVar4,puVar1);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar2;
}


