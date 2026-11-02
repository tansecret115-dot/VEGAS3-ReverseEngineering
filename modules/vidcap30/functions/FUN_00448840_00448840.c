/* Module: vidcap30.exe
   Function: FUN_00448840
   Address: 00448840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448840(LPSTR param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  CHAR local_53c [259];
  undefined1 local_439;
  undefined1 local_438 [266];
  char local_32e [260];
  char local_22a [554];
  
  iVar2 = 0;
  lstrcpynA(local_53c,param_1,0x104);
  local_439 = 0;
  FUN_0044cb00(param_2,local_438);
  iVar1 = FUN_0044c6e0(param_2);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x38) & 2) == 0) {
      puVar5 = local_438;
      uVar3 = _SfGetString_8(DAT_005ba2a0,0xc545);
      SfPrintF(local_53c,uVar3,puVar5);
    }
    else {
      if (local_32e[0] != '\0') {
        if ((*(uint *)(iVar1 + 0x38) & 0x10) == 0) {
          uVar3 = 0x9cf6;
        }
        else {
          uVar3 = 0xc54c;
        }
        uVar3 = _SfGetString_8(DAT_005ba2a0,uVar3);
        iVar2 = SfPrintF(local_53c,"%s$: %s\n",uVar3,local_32e);
      }
      if (local_22a[0] != '\0') {
        pcVar4 = local_22a;
        uVar3 = _SfGetString_8(DAT_005ba2a0,0x9cf5);
        SfPrintF(local_53c + iVar2,"%s$: %s\n",uVar3,pcVar4);
      }
    }
  }
  lstrcpynA(param_1,local_53c,0x104);
  param_1[0x103] = '\0';
  return;
}


