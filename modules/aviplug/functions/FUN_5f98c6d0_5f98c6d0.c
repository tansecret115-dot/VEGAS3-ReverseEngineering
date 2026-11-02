/* Module: aviplug.dll
   Function: FUN_5f98c6d0
   Address: 5f98c6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f98c6d0(undefined4 *param_1,uint *param_2,undefined4 *param_3,int *param_4,int *param_5,
                undefined4 *param_6,int param_7,uint param_8,int param_9)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = param_6;
  puVar3 = param_3;
  puVar1 = param_1;
  *param_3 = 0;
  *param_6 = 0;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar5 = FUN_5f98e860(puVar1,(int *)&param_6,&local_8);
  if (-1 < iVar5) {
    FUN_5f98e290(puVar1,(DWORD *)&param_3);
    FUN_5f98e2b0(puVar1,(LONG)param_3);
    puVar2 = param_2;
    FUN_5f98bf80(param_2);
    iVar5 = FUN_5f98c460(puVar1,puVar2,(undefined4 *)0x0,(int)param_6,param_7,param_8,param_9);
    if ((-1 < iVar5) && (iVar5 != 1)) {
      *puVar3 = 1;
    }
    FUN_5f98e2b0(puVar1,(LONG)param_3);
    param_1 = param_6;
    uVar6 = FUN_5f98e910(puVar1,0x63727473,&local_4,(int *)&param_1);
    if (-1 < (int)uVar6) {
      iVar5 = FUN_5f98c3a0(puVar1,param_4,param_5,(int *)0x0);
      if (-1 < iVar5) {
        *puVar4 = 1;
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}


