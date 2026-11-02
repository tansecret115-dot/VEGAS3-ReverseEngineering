/* Module: rmbe3260.dll
   Function: FUN_6600d900
   Address: 6600d900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600d900(uint param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int local_1c [3];
  int local_10 [3];
  
  FUN_6605b650(local_10);
  thunk_FUN_6605b610(param_2);
  uVar3 = param_1 / 86400000;
  if (uVar3 != 0) {
    FUN_6605bfd0(local_10,&DAT_6606c2f8);
    puVar1 = FUN_6605ba50(local_1c,local_10,&DAT_6606c790);
    FUN_6605bbe0(param_2,puVar1);
    FUN_6605b770(local_1c);
  }
  iVar2 = (int)(((ulonglong)param_1 % 86400000) / 3600000);
  if ((iVar2 != 0) || (uVar3 != 0)) {
    FUN_6605bfd0(local_10,&DAT_6606c2f8);
    puVar1 = FUN_6605ba50(local_1c,local_10,&DAT_6606c790);
    FUN_6605bbe0(param_2,puVar1);
    FUN_6605b770(local_1c);
  }
  if (((((uint)((ulonglong)param_1 % 86400000) % 3600000) / 60000 != 0) || (iVar2 != 0)) ||
     (uVar3 != 0)) {
    FUN_6605bfd0(local_10,&DAT_6606c2f8);
    puVar1 = FUN_6605ba50(local_1c,local_10,&DAT_6606c790);
    FUN_6605bbe0(param_2,puVar1);
    FUN_6605b770(local_1c);
  }
  FUN_6605bfd0(local_10,&DAT_6606c2f8);
  puVar1 = FUN_6605ba50(local_1c,local_10,&DAT_6606c78c);
  FUN_6605bbe0(param_2,puVar1);
  FUN_6605b770(local_1c);
  FUN_6605bfd0(local_10,&DAT_6606c2f8);
  FUN_6605bbe0(param_2,local_10);
  FUN_6605b770(local_10);
  return 0;
}


