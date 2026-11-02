/* Module: vegas30k.dll
   Function: FUN_0106f6f0
   Address: 0106f6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0106f6f0(int param_1,int param_2)

{
  HGLOBAL pvVar1;
  LPVOID lpBuffer;
  BOOL BVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  DWORD nNumberOfBytesToRead;
  bool bVar10;
  uint local_220;
  int local_21c;
  int iStack_214;
  DWORD DStack_210;
  int iStack_20c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  local_220 = *(uint *)(param_2 + 0x24);
  local_21c = *(int *)(param_2 + 0x28);
  iVar8 = 0;
  pvVar1 = GlobalAlloc(0x42,0x40000);
  lpBuffer = GlobalLock(pvVar1);
  if (lpBuffer == (LPVOID)0x0) {
    FUN_01070600(0xaaaaaaa3,"ValidateEntryData",0);
    return -0x7ff8fff2;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    MultiByteToWideChar(0,1,(LPCSTR)(param_2 + 0x54),-1,local_208,0x104);
    local_2 = 0;
    FUN_011496a0(local_208);
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa8);
  }
  uVar3 = *(int *)(param_2 + 0x38) * 2;
  uVar7 = *(int *)(param_2 + 0x34) * 2;
  uVar4 = uVar3 + uVar7;
  uVar5 = uVar4 + *(uint *)(param_1 + 0x890);
  uVar6 = uVar5 + *(uint *)(param_2 + 0x4c);
  iStack_20c = (uint)CARRY4(uVar3,uVar7) + *(int *)(param_1 + 0x894) +
               (uint)CARRY4(uVar4,*(uint *)(param_1 + 0x890)) + *(int *)(param_2 + 0x50) +
               (uint)CARRY4(uVar5,*(uint *)(param_2 + 0x4c)) + (uint)(0xffffffbf < uVar6);
  SetFilePointer(*(HANDLE *)(param_1 + 8),uVar6 + 0x40,&iStack_20c,0);
  iStack_214 = FUN_01149790(0,0,0);
  if ((-1 < local_21c) && ((0 < local_21c || (local_220 != 0)))) {
    while (-1 < iVar8) {
      iVar9 = local_21c;
      nNumberOfBytesToRead = local_220;
      if ((-1 < local_21c) && ((0 < local_21c || (0x3ffff < local_220)))) {
        iVar9 = 0;
        nNumberOfBytesToRead = 0x40000;
      }
      DStack_210 = 0;
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),lpBuffer,nNumberOfBytesToRead,&DStack_210,
                       (LPOVERLAPPED)0x0);
      if (((BVar2 == 0) || (nNumberOfBytesToRead != DStack_210)) || (iVar9 != 0)) {
        FUN_01070600(0xaaaaaaaa,"ValidateEntryData",0);
        iVar8 = -0x7ffb1ff8;
      }
      else {
        iStack_214 = FUN_01149790(iStack_214,lpBuffer,DStack_210);
        bVar10 = local_220 < DStack_210;
        local_220 = local_220 - DStack_210;
        local_21c = local_21c - (uint)bVar10;
        if (*(int **)(param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(DStack_210,0);
          iVar8 = FUN_011495e0();
          if (iVar8 == -0x7ffb1ff4) break;
        }
      }
      if ((local_21c < 1) && ((local_21c < 0 || (local_220 == 0)))) break;
    }
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0);
  }
  if (iStack_214 != *(int *)(param_2 + 0x1c)) {
    FUN_01070600(0xaaaaaaaf,"ValidateEntryData",0);
    iVar8 = -0x7ffb1ff5;
  }
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalUnlock(pvVar1);
  pvVar1 = GlobalHandle(lpBuffer);
  GlobalFree(pvVar1);
  return iVar8;
}


