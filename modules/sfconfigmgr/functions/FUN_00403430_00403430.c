/* Module: sfconfigmgr.dll
   Function: FUN_00403430
   Address: 00403430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00403430(void *this,wchar_t *param_1)

{
  int iVar1;
  undefined4 uStack00000008;
  int local_18c [2];
  wchar_t local_184 [4];
  int local_17c;
  wchar_t local_178 [20];
  undefined2 local_150 [40];
  wchar_t local_100 [64];
  undefined2 local_80;
  
  local_18c[0] = 0;
  iVar1 = FUN_00402040(param_1,local_18c,"Software\\Sonic Foundry");
  if (-1 < iVar1) {
    iVar1 = FUN_00402040(param_1,local_18c,"Software\\Sonic Foundry Beta");
    if ((-1 < iVar1) && (local_18c[0] == 0)) {
      swprintf(local_184,0x41a45c,param_1);
      uStack00000008 = 0;
      local_80 = 0;
      local_150[0] = 0;
      wcscpy(local_100,local_178);
      FUN_0040c330(*(int **)((int)this + 0xc),(int *)local_150,0x15c,-1,&local_17c);
    }
  }
  return;
}


