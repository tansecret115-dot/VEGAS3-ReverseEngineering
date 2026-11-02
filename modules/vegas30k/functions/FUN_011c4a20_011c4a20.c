/* Module: vegas30k.dll
   Function: FUN_011c4a20
   Address: 011c4a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011c4a20(int *param_1,undefined4 *param_2,code *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  HANDLE hEvent;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x8a) & 0x20) != 0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7a));
    InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x74));
  }
  iVar3 = -0x7fff0001;
  if ((param_1[0x8a] & 1U) != 0) {
    if ((param_1[0x8a] & 2U) != 0) {
      return 0;
    }
    iVar3 = (*param_3)(param_1,0,param_4,0,0);
    if (-1 < iVar3) {
      puVar1 = (undefined4 *)param_1[0x97];
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(param_2 + 4);
      uVar2 = param_1[0x8a];
      param_1[0x8b] = (int)param_3;
      param_1[0x8c] = param_4;
      param_1[0x8a] = uVar2 | 2;
      if ((uVar2 & 0x20) != 0) {
        hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        param_1[0x4e] = (int)hEvent;
        param_1[0x6e] = 1;
        ResetEvent(hEvent);
        iVar3 = _SfList_CreateExZ_32(param_1 + 0x4a,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
        if (iVar3 < 0) goto LAB_011c4b2a;
      }
      (*(code *)param_1[0x8b])(param_1,1,param_1[0x8c],0,0);
      if (-1 < iVar3) {
        return iVar3;
      }
    }
  }
LAB_011c4b2a:
  (**(code **)(*param_1 + 0x38))(param_1);
  return iVar3;
}


