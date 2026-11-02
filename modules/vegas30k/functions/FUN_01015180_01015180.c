/* Module: vegas30k.dll
   Function: FUN_01015180
   Address: 01015180
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01015180(HANDLE param_1,LPCVOID param_2,uint *param_3)

{
  uint uVar1;
  BOOL BVar2;
  DWORD nNumberOfBytesToWrite;
  undefined1 local_80d;
  int local_80c;
  DWORD local_808;
  uint local_804;
  WCHAR local_800 [1023];
  undefined2 local_2;
  
  nNumberOfBytesToWrite = 0;
  if ((*(int *)((int)param_2 + 0x1c) != 0) && (*(int *)((int)param_2 + 0x20) != 0)) {
    nNumberOfBytesToWrite = *(int *)((int)param_2 + 0x1c) * 2;
  }
  local_804 = nNumberOfBytesToWrite + 0x20;
  local_80c = riff_WriteChunkHeader(param_1,0x686e6772,local_804);
  if (local_80c < 0) goto LAB_01015266;
  BVar2 = WriteFile(param_1,param_2,0x20,&local_808,(LPOVERLAPPED)0x0);
  if ((BVar2 == 0) || (local_808 != 0x20)) {
LAB_0101525e:
    local_80c = -0x7ffb1ff7;
  }
  else {
    if (nNumberOfBytesToWrite != 0) {
      MultiByteToWideChar(0,1,*(LPCSTR *)((int)param_2 + 0x20),-1,local_800,0x400);
      local_2 = 0;
      BVar2 = WriteFile(param_1,local_800,nNumberOfBytesToWrite,&local_808,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (nNumberOfBytesToWrite != local_808)) goto LAB_0101525e;
    }
    uVar1 = local_804;
    if ((local_804 & 1) != 0) {
      local_80d = 0;
      BVar2 = WriteFile(param_1,&local_80d,1,&local_808,(LPOVERLAPPED)0x0);
      if ((BVar2 == 0) || (local_808 != 1)) goto LAB_0101525e;
      local_804 = uVar1 + 1;
    }
    local_804 = local_804 + 8;
  }
LAB_01015266:
  if (param_3 != (uint *)0x0) {
    *param_3 = local_804;
  }
  return local_80c;
}


