/* Module: vidcap30.exe
   Function: FUN_00533200
   Address: 00533200
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00533200(int param_1,HANDLE param_2)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *lpBuffer;
  int local_a18;
  DWORD local_a14;
  DWORD local_a10;
  int local_a0c;
  WCHAR local_a08 [260];
  WCHAR local_800 [1024];
  
  lpBuffer = (int *)(param_1 + 0x30);
  piVar4 = lpBuffer;
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_a14 = 4000;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x56c) = 0;
  *(undefined1 *)(param_1 + 0x468) = 0;
  SetFilePointer(param_2,-0x38,(PLONG)0x0,2);
  BVar1 = ReadFile(param_2,lpBuffer,0x38,&local_a10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    FUN_00536e70(0xaaaaaaaa,"LoadEndOfCentralDirectory",0);
    local_a18 = -0x7ffb1ff8;
  }
  else {
    local_a18 = 0;
    if (*lpBuffer != 0xc054d55) {
      iVar2 = -0x38;
      do {
        if (local_a18 < 0) break;
        iVar2 = iVar2 + -1;
        local_a14 = local_a14 - 1;
        local_a0c = iVar2;
        SetFilePointer(param_2,iVar2,(PLONG)0x0,2);
        BVar1 = ReadFile(param_2,lpBuffer,0x38,&local_a10,(LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          FUN_00536e70(0xaaaaaaaa,"LoadEndOfCentralDirectory",0);
          local_a18 = -0x7ffb1ff8;
          piVar4 = lpBuffer;
          for (iVar3 = 400; iVar2 = local_a0c, iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
        }
        else if (*lpBuffer == 0xc054d55) {
          local_a18 = 0;
          break;
        }
      } while (local_a14 != 0);
      if (local_a14 == 0) {
        FUN_00536e70(0xaaaaaaa5,"LoadEndOfCentralDirectory",0);
        for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
          *lpBuffer = 0;
          lpBuffer = lpBuffer + 1;
        }
        return -0x7ffb1f50;
      }
      if (local_a18 < 0) {
        return local_a18;
      }
    }
    *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(param_1 + 0x58);
    BVar1 = 1;
    *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_1 + 0x34);
    if (0 < *(int *)(param_1 + 0x5c)) {
      BVar1 = ReadFile(param_2,local_800,*(int *)(param_1 + 0x5c) * 2,&local_a14,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        return local_a18;
      }
      if ((&stack0x00000000 == (undefined1 *)0x800) || (local_800[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_800,-1,(LPSTR)(param_1 + 0x68),0x400,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else if ((undefined1 *)(param_1 + 0x68) != (undefined1 *)0x0) {
        *(undefined1 *)(param_1 + 0x68) = 0;
      }
      *(undefined1 *)(param_1 + 0x467) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x68 + param_1) = 0;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      BVar1 = ReadFile(param_2,local_a08,*(int *)(param_1 + 0x60) * 2,&local_a14,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        return local_a18;
      }
      if ((&stack0x00000000 == (undefined1 *)0xa08) || (local_a08[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_a08,-1,(LPSTR)(param_1 + 0x468),0x104,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
      }
      else if ((undefined1 *)(param_1 + 0x468) != (undefined1 *)0x0) {
        *(undefined1 *)(param_1 + 0x468) = 0;
      }
      *(undefined1 *)(param_1 + 0x56b) = 0;
      *(undefined1 *)(param_1 + 0x468 + *(int *)(param_1 + 0x60)) = 0;
    }
    if (((BVar1 != 0) && (0 < *(int *)(param_1 + 100))) &&
       (BVar1 = ReadFile(param_2,local_a08,*(int *)(param_1 + 100) * 2,&local_a14,(LPOVERLAPPED)0x0)
       , BVar1 != 0)) {
      if ((&stack0x00000000 == (undefined1 *)0xa08) || (local_a08[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_a08,-1,(LPSTR)(param_1 + 0x56c),0x104,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
      }
      else if ((undefined1 *)(param_1 + 0x56c) != (undefined1 *)0x0) {
        *(undefined1 *)(param_1 + 0x56c) = 0;
      }
      *(undefined1 *)(param_1 + 0x66f) = 0;
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x56c + param_1) = 0;
      return local_a18;
    }
  }
  return local_a18;
}


