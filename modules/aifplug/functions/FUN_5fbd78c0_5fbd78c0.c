/* Module: aifplug.dll
   Function: FUN_5fbd78c0
   Address: 5fbd78c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd78c0(HANDLE param_1,HANDLE param_2,uint *param_3,undefined4 *param_4,int *param_5,
                int *param_6,undefined4 *param_7)

{
  HANDLE hFile;
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_10;
  HANDLE local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar2 = param_4;
  hFile = param_2;
  *param_4 = 0;
  local_10 = 0;
  *param_7 = 0;
  SetFilePointer(param_2,0,(PLONG)0x0,0);
  iVar3 = FUN_5fbdc390(param_1,&local_10);
  if (iVar3 == 0) {
    return -0x7ffb1ff5;
  }
  FUN_5fbdfdc0(hFile,(DWORD *)&param_4);
  FUN_5fbdfde0(hFile,(LONG)param_4);
  puVar1 = param_3;
  FUN_5fbd79e0(param_3);
  iVar3 = FUN_5fbd7ad0(param_1,hFile,puVar1,(undefined4 *)0x0,local_10);
  if ((iVar3 < 0) || (iVar3 == 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *puVar2 = uVar4;
  FUN_5fbdfde0(hFile,(LONG)param_4);
  SetFilePointer(hFile,0,(PLONG)0x0,0);
  iVar3 = FUN_5fbe0390(hFile,(int *)&param_2,&local_8);
  if (-1 < iVar3) {
    local_c = param_2;
    uVar5 = FUN_5fbe0440(hFile,0x63727473,&local_4,(int *)&local_c);
    if ((int)uVar5 < 0) {
      return 0;
    }
    iVar3 = FUN_5fbd7a10(hFile,param_5,param_6,(int *)0x0);
    if (-1 < iVar3) {
      *param_7 = 1;
    }
  }
  return iVar3;
}


