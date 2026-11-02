/* Module: vegas30k.dll
   Function: FUN_011c6570
   Address: 011c6570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c6570(int *param_1,undefined4 *param_2,code *param_3,int param_4)

{
  undefined4 *puVar1;
  HANDLE pvVar2;
  int iVar3;
  
  iVar3 = -0x7fff0001;
  if ((param_1[0x1a] & 1U) != 0) {
    if ((param_1[0x1a] & 2U) != 0) {
      return 0;
    }
    iVar3 = (*param_3)(param_1,0,param_4,0,0);
    if (-1 < iVar3) {
      puVar1 = (undefined4 *)param_1[0x6b];
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_2 + 4);
      param_1[0x60] = param_4;
      param_1[0x5f] = (int)param_3;
      param_1[0x1a] = param_1[0x1a] | 2;
      pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      param_1[0x87] = (int)pvVar2;
      ResetEvent(pvVar2);
      param_1[0x88] = -1;
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_011c75d0,param_1,0,
                            (LPDWORD)(param_1 + 0x8a));
      param_1[0x89] = (int)pvVar2;
      (*(code *)param_1[0x5f])(param_1,1,param_1[0x60],0,0);
      return iVar3;
    }
  }
  (**(code **)(*param_1 + 0x44))(param_1);
  return iVar3;
}


