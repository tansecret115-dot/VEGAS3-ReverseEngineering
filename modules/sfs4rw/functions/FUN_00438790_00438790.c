/* Module: sfs4rw.dll
   Function: FUN_00438790
   Address: 00438790
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00438790(void *this,HANDLE param_1)

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
  
  lpBuffer = (int *)((int)this + 0x30);
  piVar4 = lpBuffer;
  for (iVar2 = 400; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_a14 = 4000;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x56c) = 0;
  *(undefined1 *)((int)this + 0x468) = 0;
  SetFilePointer(param_1,-0x38,(PLONG)0x0,2);
  BVar1 = ReadFile(param_1,lpBuffer,0x38,&local_a10,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    FUN_0043c400(this,0xaaaaaaaa,(uchar *)"LoadEndOfCentralDirectory",(uchar *)0x0);
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
        SetFilePointer(param_1,iVar2,(PLONG)0x0,2);
        BVar1 = ReadFile(param_1,lpBuffer,0x38,&local_a10,(LPOVERLAPPED)0x0);
        if (BVar1 == 0) {
          FUN_0043c400(this,0xaaaaaaaa,(uchar *)"LoadEndOfCentralDirectory",(uchar *)0x0);
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
        FUN_0043c400(this,0xaaaaaaa5,(uchar *)"LoadEndOfCentralDirectory",(uchar *)0x0);
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
    *(undefined4 *)((int)this + 0x890) = *(undefined4 *)((int)this + 0x54);
    *(undefined4 *)((int)this + 0x894) = *(undefined4 *)((int)this + 0x58);
    BVar1 = 1;
    *(undefined4 *)((int)this + 0x898) = *(undefined4 *)((int)this + 0x34);
    if (0 < *(int *)((int)this + 0x5c)) {
      BVar1 = ReadFile(param_1,local_800,*(int *)((int)this + 0x5c) * 2,&local_a14,(LPOVERLAPPED)0x0
                      );
      if (BVar1 == 0) {
        return local_a18;
      }
      if ((&stack0x00000000 == (undefined1 *)0x800) || (local_800[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_800,-1,(LPSTR)((int)this + 0x68),0x400,(LPCSTR)0x0,(LPBOOL)0x0
                           );
      }
      else if ((undefined1 *)((int)this + 0x68) != (undefined1 *)0x0) {
        *(undefined1 *)((int)this + 0x68) = 0;
      }
      *(undefined1 *)((int)this + 0x467) = 0;
      *(undefined1 *)(*(int *)((int)this + 0x5c) + 0x68 + (int)this) = 0;
    }
    if (0 < *(int *)((int)this + 0x60)) {
      BVar1 = ReadFile(param_1,local_a08,*(int *)((int)this + 0x60) * 2,&local_a14,(LPOVERLAPPED)0x0
                      );
      if (BVar1 == 0) {
        return local_a18;
      }
      if ((&stack0x00000000 == (undefined1 *)0xa08) || (local_a08[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_a08,-1,(LPSTR)((int)this + 0x468),0x104,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
      else if ((undefined1 *)((int)this + 0x468) != (undefined1 *)0x0) {
        *(undefined1 *)((int)this + 0x468) = 0;
      }
      *(undefined1 *)((int)this + 0x56b) = 0;
      *(undefined1 *)((int)this + *(int *)((int)this + 0x60) + 0x468) = 0;
    }
    if (((BVar1 != 0) && (0 < *(int *)((int)this + 100))) &&
       (BVar1 = ReadFile(param_1,local_a08,*(int *)((int)this + 100) * 2,&local_a14,
                         (LPOVERLAPPED)0x0), BVar1 != 0)) {
      if ((&stack0x00000000 == (undefined1 *)0xa08) || (local_a08[0] != L'\0')) {
        WideCharToMultiByte(0,0,local_a08,-1,(LPSTR)((int)this + 0x56c),0x104,(LPCSTR)0x0,
                            (LPBOOL)0x0);
      }
      else if ((undefined1 *)((int)this + 0x56c) != (undefined1 *)0x0) {
        *(undefined1 *)((int)this + 0x56c) = 0;
      }
      *(undefined1 *)((int)this + 0x66f) = 0;
      *(undefined1 *)(*(int *)((int)this + 100) + 0x56c + (int)this) = 0;
      return local_a18;
    }
  }
  return local_a18;
}


