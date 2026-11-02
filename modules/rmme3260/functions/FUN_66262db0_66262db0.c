/* Module: rmme3260.dll
   Function: FUN_66262db0
   Address: 66262db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66262db0(void *this,byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((param_1 != (byte *)0x0) &&
     (iVar3 = FUN_66252960(*(void **)((int)this + 8),param_1,(int *)&local_8), iVar3 == 1)) {
    if (*(int *)(local_8[3] + -8) != 0) {
      puVar4 = operator_new(0x34);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_66262ef0(puVar4);
      }
      iVar3 = FUN_66262f80(puVar4,(void *)*local_8);
      if (iVar3 != 0) {
        return 0;
      }
      FUN_66250b60(*(void **)((int)this + 0xc),puVar4);
      local_8 = puVar4;
    }
    pcVar2 = param_2;
    if ((*param_2 == '/') || (*param_2 == '\\')) {
      pcVar5 = &DAT_6627cf3c;
    }
    else {
      pcVar5 = &DAT_6627cb1c;
    }
    FUN_66250410(local_8 + 3,pcVar5);
    FUN_66250640(local_8 + 3,pcVar2);
    cVar1 = *(char *)(*(int *)(local_8[3] + -8) + -1 + local_8[3]);
    if ((cVar1 != '/') && (cVar1 != '\\')) {
      FUN_66250640(local_8 + 3,&DAT_6627cb1c);
    }
    if (param_3 == 0) {
      local_8[0xc] = 0;
    }
    else {
      local_8[0xc] = param_3;
      iVar3 = FUN_66263580((void *)*local_8,local_8 + 2);
      if ((iVar3 == 0) &&
         (iVar3 = (*(code *)**(undefined4 **)local_8[2])
                            ((undefined4 *)local_8[2],&DAT_6626a8b8,&param_1), iVar3 == 0)) {
        (**(code **)(*(int *)param_1 + 0x10))(param_1,local_8[0xc]);
        (**(code **)(*(int *)param_1 + 8))(param_1);
      }
    }
    FUN_662668b0(*(void **)this,(int *)local_8[3],(int)local_8);
  }
  return 0;
}


