/* Module: vegas30k.dll
   Function: FUN_0117fd10
   Address: 0117fd10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0117fd10(HMODULE param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_71c [4];
  char local_718 [4];
  char local_714 [4];
  char local_710;
  undefined4 local_70f;
  char local_618 [4];
  char local_614 [4];
  char local_610 [4];
  char local_60c;
  undefined4 local_60b;
  char local_514 [260];
  CHAR local_410 [260];
  char local_30c [260];
  char local_208 [260];
  char local_104 [260];
  
  local_71c = (char  [4])s_sfkernel_w95_011ea624._0_4_;
  local_718 = (char  [4])s_sfkernel_w95_011ea624._4_4_;
  local_710 = s_sfkernel_w95_011ea624[0xc];
  local_714 = (char  [4])s_sfkernel_w95_011ea624._8_4_;
  puVar4 = &local_70f;
  for (iVar3 = 0x3d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_614 = (char  [4])s_sfkernel_dll_011ea614._4_4_;
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  local_618 = (char  [4])s_sfkernel_dll_011ea614._0_4_;
  local_610 = (char  [4])s_sfkernel_dll_011ea614._8_4_;
  local_60c = s_sfkernel_dll_011ea614[0xc];
  puVar4 = &local_60b;
  for (iVar3 = 0x3d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  DVar1 = GetModuleFileNameA(param_1,local_410,0x104);
  if (DVar1 != 0) {
    _splitpath(local_410,local_104,local_208,local_514,local_30c);
    _makepath(local_71c,(char *)0x0,(char *)0x0,local_514,".w95");
    _makepath(local_618,(char *)0x0,(char *)0x0,local_514,local_30c);
  }
  uVar2 = FUN_01001190(local_71c,local_618,param_1,param_2);
  DAT_012b0b38 = ~-(uint)(param_2 != 1) & uVar2;
  return;
}


