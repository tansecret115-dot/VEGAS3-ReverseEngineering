/* Module: rmbe3260.dll
   Function: FUN_66006550
   Address: 66006550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66006550(int *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_6605b670(local_10,param_1);
  FUN_6605b7e0(local_1c,param_2);
  FUN_6605bcf0(local_1c,&DAT_6606c2f4,&DAT_6606c264,0);
  iVar1 = FUN_6605bf70(local_10,'\\');
  piVar2 = FUN_6605bf20(local_10,local_28,iVar1 + 1);
  FUN_6605b900(local_10,piVar2);
  FUN_6605b770(local_28);
  puVar3 = FUN_6605ba00(local_28,local_10,local_1c);
  FUN_6604ebf0((char *)*puVar3);
  FUN_6605b770(local_28);
  FUN_6605b770(local_1c);
  FUN_6605b770(local_10);
  return;
}


