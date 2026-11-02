/* Module: g2plug.dll
   Function: G2DeleteRegistryTemplate
   Address: 5f80eab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall G2DeleteRegistryTemplate(struct _GUID *) */

long G2DeleteRegistryTemplate(_GUID *param_1)

{
  LSTATUS LVar1;
  HKEY local_2c;
  CHAR local_28 [40];
  
                    /* 0xeab0  8  ?G2DeleteRegistryTemplate@@YGJPAU_GUID@@@Z */
  LVar1 = RegCreateKeyA((HKEY)0x80000002,
                        "Software\\Sonic Foundry\\Streaming Templates\\G2 Templates\\Custom",
                        &local_2c);
  if (LVar1 == 0) {
    FUN_5f80e9d0(param_1,local_28,0x28,1);
    FUN_5f82da40(local_2c,local_28);
    RegCloseKey(local_2c);
  }
  return 0;
}


