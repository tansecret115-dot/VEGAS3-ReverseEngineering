/* Module: vegas30k.dll
   Function: FUN_0102bdc0
   Address: 0102bdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int * FUN_0102bdc0(int *param_1,int *param_2)

{
  LSTATUS LVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  code *pcVar7;
  DWORD local_ec;
  HKEY local_e8;
  HKEY local_e4;
  HKEY local_e0;
  DWORD local_dc;
  CHAR local_d8 [40];
  int local_b0 [4];
  CLSID local_a0;
  CHAR local_90 [63];
  undefined1 local_51;
  WCHAR local_50 [39];
  undefined2 local_2;
  
  pcVar5 = RegOpenKeyExA_exref;
  local_e4 = (HKEY)0x0;
  local_e0 = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,"Filter",0,0x20019,&local_e4);
  pcVar7 = RegCloseKey_exref;
  if ((LVar1 == 0) &&
     (LVar1 = RegOpenKeyExA((HKEY)&DAT_80000000,"CLSID",0,0x20019,&local_e0),
     pcVar7 = RegCloseKey_exref, LVar1 == 0)) {
    local_dc = 0;
    local_ec = 0x28;
    iVar2 = RegEnumKeyExA(local_e4,0,local_d8,&local_ec,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          (PFILETIME)0x0);
    pcVar7 = RegCloseKey_exref;
    while (RegCloseKey_exref = pcVar7, iVar2 == 0) {
      iVar2 = (*pcVar5)(local_e4,local_d8,0,0x20019,&local_e8);
      if (iVar2 == 0) {
        local_ec = 0x40;
        LVar1 = RegQueryValueA(local_e8,(LPCSTR)0x0,local_90,(PLONG)&local_ec);
        pcVar7 = RegCloseKey_exref;
        if (LVar1 == 0) {
          local_51 = 0;
          RegCloseKey(local_e8);
          iVar2 = (*pcVar5)(local_e0,local_d8,0,0x20019,&local_e8);
          if (iVar2 == 0) {
            iVar2 = FUN_0102af90(local_e8,local_b0 + 1);
            RegCloseKey(local_e8);
            MultiByteToWideChar(0,1,local_d8,-1,local_50,0x28);
            local_2 = 0;
            CLSIDFromString(local_50,&local_a0);
            pcVar5 = RegOpenKeyExA_exref;
            if ((-1 < iVar2) && (local_b0[1] == 4)) {
              piVar3 = (int *)_SfPlugIn_FindNode_8(param_1,&local_a0);
              if (piVar3 == (int *)0x0) {
                piVar3 = calloc(1,0x60);
                if (piVar3 == (int *)0x0) break;
                piVar4 = local_b0;
                piVar6 = piVar3;
                for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *piVar6 = *piVar4;
                  piVar4 = piVar4 + 1;
                  piVar6 = piVar6 + 1;
                }
                iVar2 = *param_2;
                piVar3[1] = 4;
                piVar3[2] = iVar2;
                piVar3[3] = 0x200003;
                *piVar3 = (int)param_1;
                *param_2 = *param_2 + 1;
                param_1 = piVar3;
              }
              piVar3[3] = piVar3[3] & 0xff7fffff;
              pcVar5 = RegOpenKeyExA_exref;
            }
          }
        }
      }
      local_dc = local_dc + 1;
      local_ec = 0x28;
      iVar2 = RegEnumKeyExA(local_e4,local_dc,local_d8,&local_ec,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      pcVar7 = RegCloseKey_exref;
    }
  }
  if (local_e4 != (HKEY)0x0) {
    (*pcVar7)(local_e4);
  }
  if (local_e0 != (HKEY)0x0) {
    (*pcVar7)(local_e0);
  }
  return param_1;
}


