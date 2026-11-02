/* Module: rmbe3260.dll
   Function: FUN_66003a30
   Address: 66003a30
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __fastcall FUN_66003a30(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined4 uVar4;
  char *local_14 [3];
  float local_8;
  
  FUN_6605b650(local_14);
  uVar4 = 0x100;
  iVar1 = **(int **)(param_1 + 0x152);
  iVar2 = FUN_6605bc10(local_14,0xff);
  (**(code **)(iVar1 + 0x118))(iVar2,uVar4);
  FUN_6605bc90(local_14,-1);
  dVar3 = atof(local_14[0]);
  local_8 = (float)dVar3;
  FUN_6605b770((int *)local_14);
  return (float10)local_8;
}


