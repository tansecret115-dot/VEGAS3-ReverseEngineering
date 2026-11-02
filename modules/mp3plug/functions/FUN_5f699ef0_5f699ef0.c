/* Module: mp3plug.dll
   Function: FUN_5f699ef0
   Address: 5f699ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD FUN_5f699ef0(HANDLE param_1,undefined4 *param_2)

{
  HANDLE hFile;
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG lDistanceToMove;
  DWORD local_2c [3];
  undefined4 local_20;
  
  hFile = param_1;
  if (param_1 != (HANDLE)0xffffffff) {
    local_2c[0] = GetFileSize(param_1,(LPDWORD)0x0);
    iVar3 = FUN_5f699d40(hFile,(int *)local_2c);
    if (iVar3 == 0) {
      local_2c[1] = 0;
      local_2c[2] = 0;
      lDistanceToMove = 0;
    }
    else {
      local_2c[1] = 0xffffff80;
      local_2c[2] = 0xffffffff;
      lDistanceToMove = -0x80;
    }
    SetFilePointer(hFile,lDistanceToMove,(PLONG)(local_2c + 2),2);
    WriteFile(hFile,&DAT_5f72c9bc,3,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    puVar1 = param_2;
    FUN_5f699e60(hFile,(LPCSTR)*param_2,0x1e);
    FUN_5f699e60(hFile,(LPCSTR)puVar1[1],0x1e);
    FUN_5f699e60(hFile,(LPCSTR)puVar1[2],0x1e);
    FUN_5f699e60(hFile,(LPCSTR)puVar1[3],4);
    param_2 = (undefined4 *)FUN_5f699e60(hFile,(LPCSTR)puVar1[5],0x1c);
    local_20._0_2_ = 0;
    if ((LPCSTR)puVar1[6] != (LPCSTR)0x0) {
      iVar3 = lstrlenA((LPCSTR)puVar1[6]);
      if (iVar3 != 0) {
        uVar2 = FUN_5f6a0ca0(puVar1[6],0);
        local_20._0_2_ = CONCAT11(uVar2,(undefined1)local_20);
      }
    }
    WriteFile(hFile,&local_20,2,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    puVar5 = &local_20;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    uVar4 = FUN_5f699d00((LPCSTR)puVar1[4]);
    local_20._0_2_ = CONCAT11(local_20._1_1_,(char)uVar4);
    WriteFile(hFile,&local_20,1,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    SetEndOfFile(hFile);
    return (DWORD)param_2;
  }
  return 0x80004005;
}


