/* Module: vegas30.exe
   Function: FUN_0043c410
   Address: 0043c410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0043c410(void)

{
  int iVar1;
  uint *puVar2;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  uint local_224 [3];
  undefined1 auStack_218 [4];
  WCHAR local_214 [259];
  undefined2 uStack_e;
  undefined4 uStack_8;
  
  local_224[1] = 1;
  local_214[0] = L'\0';
  local_214[1] = L'\0';
  local_224[0] = 0;
  iVar1 = SfS4RWCreateInstance(0,&DAT_00611d10,local_224);
  if (-1 < iVar1) {
    iVar1 = FUN_0043c5f0(unaff_ESI);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*unaff_ESI + 0x4c))(unaff_ESI,3,0,0x4c);
      if (-1 < iVar1) {
        MultiByteToWideChar(0,1,"Sonic Foundry Vegas 3.0",-1,local_214,0x104);
        uStack_e = 0;
        iVar1 = (**(code **)(*unaff_ESI + 0x28))(unaff_ESI,local_214);
        if (-1 < iVar1) {
          iVar1 = FUN_0043c150(unaff_ESI,1);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,0,0);
            if (-1 < iVar1) {
              FUN_0043c7f0(unaff_ESI);
              (**(code **)(*unaff_ESI + 0x40))(unaff_ESI,uStack_8,local_224 + 1,&stack0xfffffdd4);
            }
          }
        }
      }
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if ((DAT_0064b4e0 == 0) || (DAT_0064b4f0 == 0)) {
    iVar1 = FUN_00601ab0(local_224 + 2,&stack0xfffffdd8,1);
    if (iVar1 < 0) {
      DAT_0064b4f0 = 1;
    }
    else if ((int)DAT_0064b4e0 <= (int)(unaff_EBX & 0xff)) {
      DAT_0064b4f0 = 0;
      _DAT_0064b4f4 = local_224[2];
      DAT_0064b4e0 = unaff_EBX & 0xff;
    }
  }
  iVar1 = FUN_00601ab0(auStack_218,local_224,2);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < DAT_0063dd5c) {
    puVar2 = &DAT_0063dcfc;
    while (((local_224[0] & 0xff) != puVar2[-1] || ((local_224[0] & 0xffff) >> 8 != *puVar2))) {
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x1b;
      if (DAT_0063dd5c <= iVar1) {
        return unaff_EBP;
      }
    }
    _mbscpy(&DAT_00647210,(&PTR_s_Sonic_Foundry_Vegas_Video_3_0_0063dcf0)[iVar1 * 0x1b]);
  }
  return unaff_EBP;
}


