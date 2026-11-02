/* Module: Setup.exe
   Function: Annotate
   Address: 00409dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::Annotate(char const *,char const *) */

long CArchive2::Annotate(char *param_1,char *param_2)

{
  HANDLE hObject;
  long lVar1;
  uint uVar2;
  uchar *in_stack_0000000c;
  int local_10c;
  LPSTR local_108;
  uchar local_104 [260];
  
                    /* 0x9dd0  6  ?Annotate@CArchive2@@QAGJPBD0@Z */
  GetFullPathNameA(param_2,0x104,(LPSTR)local_104,&local_108);
  _mbscpy((uchar *)(param_1 + 0x678),local_104);
  hObject = CreateFileA(param_2,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffff) {
    param_1[0x24] = '\x02';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    lVar1 = FUN_0040a520(param_1,hObject);
    if (lVar1 < 0) {
      FUN_00410c30(param_1,0xaaaaaaa5,(uchar *)"Annotate",(uchar *)0x0);
      lVar1 = -0x7ffb1f50;
    }
    else {
      *(HANDLE *)(param_1 + 0xc) = hObject;
      *(HANDLE *)(param_1 + 8) = hObject;
      uVar2 = lstrlenA((LPCSTR)in_stack_0000000c);
      if (uVar2 < 0x401) {
        _mbscpy((uchar *)(param_1 + 0x68),in_stack_0000000c);
      }
      else {
        lstrcpynA(param_1 + 0x68,(LPCSTR)in_stack_0000000c,0x400);
        param_1[0x467] = '\0';
      }
      uVar2 = *(uint *)(param_1 + 0x890) + *(uint *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x40);
      local_10c = *(int *)(param_1 + 0x894) + *(int *)(param_1 + 0x48) +
                  (uint)CARRY4(*(uint *)(param_1 + 0x890),*(uint *)(param_1 + 0x44)) +
                  *(int *)(param_1 + 0x50) + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x4c));
      SetFilePointer(*(HANDLE *)(param_1 + 8),uVar2 + *(uint *)(param_1 + 0x4c),&local_10c,0);
      uVar2 = *(uint *)(param_1 + 0x4c);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x44) + uVar2;
      *(uint *)(param_1 + 0x1c) =
           *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x50) +
           (uint)CARRY4(*(uint *)(param_1 + 0x44),uVar2);
      lVar1 = FUN_0040cdb0(param_1,uVar2,*(int *)(param_1 + 0x50));
    }
    CloseHandle(hObject);
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    return lVar1;
  }
  FUN_00410c30(param_1,0xaaaaaaa4,(uchar *)"Annotate",(uchar *)0x0);
  return -0x7ffb1ffa;
}


