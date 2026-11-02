/* Module: aviplug.dll
   Function: FUN_5f940950
   Address: 5f940950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f940950(uint param_1,LPCVOID param_2,LONG param_3,LONG param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  LONG local_4;
  
  uVar1 = param_1;
  if (*(HANDLE *)(param_1 + 0x94) == (HANDLE)0xffffffff) {
    return 0x8000ffff;
  }
  local_4 = param_4;
  SetFilePointer(*(HANDLE *)(param_1 + 0x94),param_3,&local_4,0);
  uVar2 = param_5;
  BVar3 = WriteFile(*(HANDLE *)(uVar1 + 0x94),param_2,param_5,&param_1,(LPOVERLAPPED)0x0);
  if ((BVar3 != 0) && (uVar2 <= param_1)) {
    return 0;
  }
  return 0x8004e009;
}


