/* Module: vegas30k.dll
   Function: FUN_01060b90
   Address: 01060b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_01060b90(int param_1,int param_2,int param_3,undefined4 param_4,LPCVOID param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  HGLOBAL pvVar5;
  uint uVar6;
  DWORD nNumberOfBytesToWrite;
  DWORD local_c;
  int local_8;
  int local_4;
  
  FUN_010609f0();
  iVar1 = FUN_0105fae0();
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar2 = (*(uint *)(param_1 + 0x26c) >> 3) * *(int *)(param_1 + 0x270) * 2;
  uVar3 = iVar2 * param_2;
  nNumberOfBytesToWrite = iVar2 * param_3;
  local_8 = uVar3 + *(uint *)(param_1 + 0x264);
  local_4 = ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar3,*(uint *)(param_1 + 0x264));
  SetFilePointer(*(HANDLE *)(param_1 + 600),local_8,&local_4,0);
  BVar4 = WriteFile(*(HANDLE *)(param_1 + 600),param_5,nNumberOfBytesToWrite,&local_c,
                    (LPOVERLAPPED)0x0);
  if ((BVar4 != 0) && (local_c == nNumberOfBytesToWrite)) {
    if (*(LPCVOID *)(param_1 + 0x250) != (LPCVOID)0x0) {
      pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x250));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x250));
      GlobalFree(pvVar5);
      *(undefined4 *)(param_1 + 0x250) = 0;
    }
    uVar3 = *(uint *)(param_1 + 0x27c);
    uVar6 = *(uint *)(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0x2ac) = 1;
    if ((uVar3 < param_7) || ((uVar3 == param_7 && (uVar6 <= param_6)))) {
      uVar3 = param_7;
      uVar6 = param_6;
    }
    *(uint *)(param_1 + 0x278) = uVar6;
    *(uint *)(param_1 + 0x27c) = uVar3;
    return iVar1;
  }
  return -0x7ffb1ff7;
}


