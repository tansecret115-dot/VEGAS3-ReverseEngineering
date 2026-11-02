/* Module: encn3260.dll
   Function: FUN_664cecb0
   Address: 664cecb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664cecb0(void *this,byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((param_1 != (byte *)0x0) &&
     (iVar3 = FUN_664bde30(*(void **)((int)this + 8),param_1,(int *)&local_8), iVar3 == 1)) {
    if (*(int *)(local_8[3] + -8) != 0) {
      puVar4 = operator_new(0x34);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_664cedf0(puVar4);
      }
      iVar3 = FUN_664cee80(puVar4,(void *)*local_8);
      if (iVar3 != 0) {
        return 0;
      }
      FUN_664baab0(*(void **)((int)this + 0xc),puVar4);
      local_8 = puVar4;
    }
    pcVar2 = param_2;
    if ((*param_2 == '/') || (*param_2 == '\\')) {
      pcVar5 = &DAT_664f05c4;
    }
    else {
      pcVar5 = &DAT_664f01ac;
    }
    FUN_664bb5e0(local_8 + 3,pcVar5);
    FUN_664bb810(local_8 + 3,pcVar2);
    cVar1 = *(char *)(*(int *)(local_8[3] + -8) + -1 + local_8[3]);
    if ((cVar1 != '/') && (cVar1 != '\\')) {
      FUN_664bb810(local_8 + 3,&DAT_664f01ac);
    }
    if (param_3 == 0) {
      local_8[0xc] = 0;
    }
    else {
      local_8[0xc] = param_3;
      iVar3 = FUN_664cf5e0((void *)*local_8,local_8 + 2);
      if ((iVar3 == 0) &&
         (iVar3 = (*(code *)**(undefined4 **)local_8[2])
                            ((undefined4 *)local_8[2],&DAT_664dc880,&param_1), iVar3 == 0)) {
        (**(code **)(*(int *)param_1 + 0x10))(param_1,local_8[0xc]);
        (**(code **)(*(int *)param_1 + 8))(param_1);
      }
    }
    FUN_664d6bc0(*(void **)this,(int *)local_8[3],(int)local_8);
  }
  return 0;
}


