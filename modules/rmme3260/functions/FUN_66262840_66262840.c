/* Module: rmme3260.dll
   Function: FUN_66262840
   Address: 66262840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66262840(void *this,byte *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((param_1 != (byte *)0x0) &&
     (iVar3 = FUN_66252960(*(void **)this,param_1,(int *)&local_8), iVar3 == 1)) {
    if (*(int *)(local_8[4] + -8) != 0) {
      puVar4 = operator_new(0x28);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_662629a0(puVar4);
      }
      iVar3 = FUN_66262a20(puVar4,(void *)*local_8);
      if (iVar3 != 0) {
        return 0;
      }
      FUN_66250b60(*(void **)((int)this + 4),puVar4);
      local_8 = puVar4;
    }
    piVar2 = param_2;
    if (((char)*param_2 == '/') || ((char)*param_2 == '\\')) {
      pcVar5 = &DAT_6627cf3c;
    }
    else {
      pcVar5 = &DAT_6627cb1c;
    }
    FUN_66250410(local_8 + 4,pcVar5);
    FUN_66250640(local_8 + 4,(char *)piVar2);
    cVar1 = *(char *)(*(int *)(local_8[4] + -8) + -1 + local_8[4]);
    if ((cVar1 != '/') && (cVar1 != '\\')) {
      FUN_66250640(local_8 + 4,&DAT_6627cb1c);
    }
    piVar2 = param_3;
    if (param_3 == (int *)0x0) {
      local_8[2] = 0;
    }
    else {
      (**(code **)(*param_3 + 0x20))(param_3,s_MountPoint_66270178,&param_2);
      (**(code **)(*param_2 + 8))(param_2);
      local_8[2] = piVar2;
      iVar3 = FUN_66263580((void *)*local_8,local_8 + 3);
      if ((iVar3 == 0) &&
         (iVar3 = (*(code *)**(undefined4 **)local_8[3])
                            ((undefined4 *)local_8[3],&DAT_6626b128,&param_1), iVar3 == 0)) {
        (**(code **)(*(int *)param_1 + 0x10))(param_1,local_8[2]);
        (**(code **)(*(int *)param_1 + 8))(param_1);
      }
    }
    FUN_662668b0(*(void **)((int)this + 0xc),(int *)local_8[4],(int)local_8);
  }
  return 0;
}


