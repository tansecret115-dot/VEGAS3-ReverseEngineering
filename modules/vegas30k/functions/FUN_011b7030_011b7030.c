/* Module: vegas30k.dll
   Function: FUN_011b7030
   Address: 011b7030
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011b7030(int param_1)

{
  LSTATUS LVar1;
  HRESULT HVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  CHAR *pCVar6;
  HKEY local_40;
  LPVOID local_3c;
  LPVOID local_38;
  IID local_34;
  CHAR local_24 [36];
  
  pcVar4 = "Software\\Sonic Foundry\\SfDrivers\\";
  pCVar6 = local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pCVar6 = pCVar6 + 4;
  }
  *(undefined2 *)pCVar6 = *(undefined2 *)pcVar4;
  iVar3 = 0;
  local_40 = (HKEY)0x0;
  iVar5 = 0x4e001;
  LVar1 = RegOpenKeyA((HKEY)&DAT_80000001,local_24,&local_40);
  if (LVar1 == 0) {
    iVar5 = FUN_011b6df0(local_40,0,&local_34);
    while (iVar5 == 0) {
      local_3c = (LPVOID)0x0;
      HVar2 = CoCreateInstance(&local_34,(LPUNKNOWN)0x0,5,(IID *)&DAT_011d9a50,&local_3c);
      if (HVar2 == 0) {
        local_38 = local_3c;
        _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x10),0xffffffff,&local_38,1);
      }
      iVar3 = iVar3 + 1;
      iVar5 = FUN_011b6df0(local_40,iVar3,&local_34);
    }
  }
  if (local_40 != (HKEY)0x0) {
    RegCloseKey(local_40);
  }
  return iVar5;
}


