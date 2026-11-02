/* Module: vegas30k.dll
   Function: FUN_0102bbe0
   Address: 0102bbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_0102bbe0(HKEY param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  LSTATUS LVar5;
  uint *puVar6;
  uint *puVar7;
  DWORD local_ec;
  HKEY local_e8;
  DWORD local_e4;
  DWORD local_e0;
  int local_dc;
  uint local_d8 [4];
  CLSID local_c8;
  CHAR local_b8 [63];
  undefined1 local_79;
  CHAR local_78 [40];
  WCHAR local_50 [39];
  undefined2 local_2;
  
  local_e4 = 0;
  iVar4 = RegEnumKeyA(param_1,0,local_78,0x28);
  puVar1 = param_2;
  do {
    if (iVar4 != 0) {
      return puVar1;
    }
    LVar5 = RegOpenKeyExA(param_1,local_78,0,0x20019,&local_e8);
    param_2 = puVar1;
    if (LVar5 == 0) {
      local_ec = 0x40;
      LVar5 = RegQueryValueA(local_e8,(LPCSTR)0x0,local_b8,(PLONG)&local_ec);
      if (LVar5 == 0) {
        local_79 = 0;
        local_ec = 4;
        LVar5 = RegQueryValueExA(local_e8,"Flags",(LPDWORD)0x0,&local_e0,(LPBYTE)(local_d8 + 3),
                                 &local_ec);
        if (((LVar5 != 0) || (local_ec != 4)) || (local_e0 != 4)) {
          local_d8[3] = 3;
        }
        RegCloseKey(local_e8);
        MultiByteToWideChar(0,1,local_78,-1,local_50,0x28);
        local_2 = 0;
        CLSIDFromString(local_50,&local_c8);
        uVar2 = local_d8[3];
        if (((local_d8[3] & 1) != 0) && ((local_d8[3] & 2) != 0)) {
          local_d8[1] = 4;
          bVar3 = FUN_0102b4e0(&local_c8,0);
          local_dc = CONCAT31(local_dc._1_3_,(byte)(uVar2 >> 0x18) | bVar3);
          local_d8[3] = local_dc << 0x18 | local_d8[3] & 0xffffff;
          param_2 = calloc(1,0x60);
          if (param_2 == (uint *)0x0) {
            return puVar1;
          }
          puVar6 = local_d8;
          puVar7 = param_2;
          for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          param_2[1] = 4;
          param_2[2] = *param_3;
          *param_2 = (uint)puVar1;
          *param_3 = *param_3 + 1;
        }
      }
    }
    local_e4 = local_e4 + 1;
    iVar4 = RegEnumKeyA(param_1,local_e4,local_78,0x28);
    puVar1 = param_2;
  } while( true );
}


