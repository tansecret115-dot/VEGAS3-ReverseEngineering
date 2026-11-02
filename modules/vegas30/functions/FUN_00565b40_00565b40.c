/* Module: vegas30.exe
   Function: FUN_00565b40
   Address: 00565b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00565b40(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  int iVar2;
  uchar *_Source;
  int iVar3;
  int iVar4;
  undefined4 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined1 local_938 [4];
  undefined1 local_934 [268];
  int local_828;
  undefined4 local_824;
  char local_820 [260];
  uchar local_71c [260];
  undefined1 local_618 [260];
  undefined1 local_514 [260];
  undefined1 local_410 [260];
  undefined1 local_30c [260];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  *param_3 = 0;
  iVar1 = FUN_005f06b0(param_1,local_938);
  if ((-1 < iVar1) && (iVar1 = FUN_005f9910(local_30c,param_1,0), -1 < iVar1)) {
    iVar2 = FUN_005f9530(local_410,local_104,local_618,local_30c);
    if (iVar2 == 0) {
      return -0x7ffb1ff3;
    }
    _Source = (uchar *)_SfGetFileNamePtrA_4(local_410);
    _mbscpy(local_71c,_Source);
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      if (local_71c[0] == '\0') {
        SfPrintF(local_820,"%s%.4d%s",param_2,iVar4,local_618);
      }
      else {
        SfPrintF(local_820,"%s%s-%.4d%s",param_2,local_71c,iVar4,local_618);
      }
      if (9999 < iVar4 + 1) {
        local_820[0] = '\0';
        break;
      }
      iVar3 = _SfDoesFileExist_4(local_820);
      iVar2 = iVar4 + 1;
    } while (iVar3 != 0);
    if (local_820[0] == '\0') {
      return -0x7ffb1ffa;
    }
    iVar2 = 0;
    if (0 < local_828) {
      do {
        if (local_71c[0] == '\0') {
          SfPrintF(local_514,"%s%.4d%s",param_2,iVar2 + iVar4,local_618);
        }
        else {
          SfPrintF(local_514,"%s%s-%.4d%s",param_2,local_71c,iVar2 + iVar4,local_618);
        }
        iVar1 = FUN_005f9910(local_208,param_1,iVar2);
        if (iVar1 < 0) {
          return iVar1;
        }
        local_944 = ftol();
        local_940 = ftol();
        local_93c = *(undefined4 *)(param_5 + 8);
        iVar1 = FUN_0043d120(local_208,local_514,1,&local_944);
        if (iVar1 < 0) {
          return iVar1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_828);
    }
    if (-1 < iVar1) {
      SfPrintF(local_934,&DAT_00610a78,local_820);
      local_824 = 4;
      iVar1 = FUN_005f0420(local_938,param_4,param_3);
      return iVar1;
    }
  }
  return iVar1;
}


