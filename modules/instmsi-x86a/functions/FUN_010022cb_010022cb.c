/* Module: InstMsi-x86a.exe
   Function: FUN_010022cb
   Address: 010022cb
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_010022cb(int param_1,int param_2,int param_3,LPCSTR param_4)

{
  LPSTR pCVar1;
  int iVar2;
  char cVar3;
  LPCSTR pCVar4;
  UINT UVar5;
  uint uVar6;
  CHAR local_10 [12];
  
  cVar3 = '\0';
  DAT_0100b704 = 0x70;
  if (param_1 == 1) {
    uVar6 = 0;
    UVar5 = 0x10;
    pCVar4 = (LPCSTR)0x0;
    pCVar1 = FUN_010022ae(param_3 + param_2,local_10);
    FUN_01003cb8((HWND)0x0,0x4fa,pCVar1,pCVar4,UVar5,uVar6);
  }
  else if (param_1 == 4) {
    uVar6 = 5;
    UVar5 = 0x20;
    pCVar4 = (LPCSTR)0x0;
    pCVar1 = FUN_010022ae(param_3 + param_2,local_10);
    iVar2 = FUN_01003cb8((HWND)0x0,0x4bd,pCVar1,pCVar4,UVar5,uVar6);
    cVar3 = '\x01' - (iVar2 != 4);
  }
  else if (param_1 == 2) {
    uVar6 = 0x104;
    UVar5 = 0x40;
    pCVar1 = FUN_010022ae(param_3,local_10);
    iVar2 = FUN_01003cb8((HWND)0x0,0x4cc,pCVar1,param_4,UVar5,uVar6);
    if (iVar2 == 6) {
      DAT_0100b704 = 0;
      cVar3 = '\x01';
    }
  }
  return (bool)cVar3;
}


