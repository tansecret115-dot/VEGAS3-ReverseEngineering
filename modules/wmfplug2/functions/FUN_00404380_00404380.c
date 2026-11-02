/* Module: wmfplug2.dll
   Function: FUN_00404380
   Address: 00404380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_00404380(undefined4 *param_1)

{
  int iVar1;
  int *unaff_EBP;
  undefined4 *puVar2;
  int unaff_retaddr;
  int *piStack_228;
  undefined1 *puStack_224;
  int local_21c [2];
  WCHAR aWStack_214 [260];
  LPSTR pCStack_c;
  int iStack_8;
  undefined4 *puStack_4;
  
  puStack_224 = (undefined1 *)local_21c;
  piStack_228 = (int *)&DAT_0047b5f0;
  iVar1 = (**(code **)*param_1)();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*piStack_228 + 0x3c))(piStack_228,&puStack_224);
    if ((-1 < iVar1) && (puVar2 = (undefined4 *)0x0, param_1 != (undefined4 *)0x0)) {
      do {
        local_21c[1] = 0;
        puStack_224 = (undefined1 *)0x4;
        piStack_228 = (int *)0x0;
        iVar1 = (**(code **)(*unaff_EBP + 0x40))
                          (unaff_EBP,puVar2,&stack0xfffffde0,aWStack_214,local_21c + 1,0,local_21c,
                           &puStack_224,&piStack_228);
        if ((-1 < iVar1) && (unaff_retaddr == local_21c[0])) {
          if (puStack_4 != (undefined4 *)0x0) {
            *puStack_4 = piStack_228;
          }
          if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_214,-1,pCStack_c,iStack_8,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else if (pCStack_c != (LPSTR)0x0) {
            *pCStack_c = '\0';
          }
          pCStack_c[iStack_8 + -1] = '\0';
          break;
        }
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      } while (puVar2 < param_1);
    }
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return iVar1;
}


