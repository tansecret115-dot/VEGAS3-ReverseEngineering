/* Module: vidcap30.exe
   Function: FUN_00462230
   Address: 00462230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00462230(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *local_228;
  uint local_224;
  undefined4 local_220;
  undefined4 local_21c;
  uint auStack_218 [2];
  undefined1 auStack_210 [4];
  undefined1 auStack_20c [4];
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
  local_21c = 1;
  auStack_218[1] = 0;
  local_228 = (int *)0x0;
  iVar2 = SfS4RWCreateInstance(0,&DAT_0058c528,&local_228);
  if (-1 < iVar2) {
    iVar2 = FUN_00462440(local_228);
    if ((-1 < iVar2) && (iVar2 = (**(code **)(*local_228 + 0x4c))(local_228,3,0,0x3f), -1 < iVar2))
    {
      MultiByteToWideChar(0,1,"Sonic Foundry Video Capture 3.0",-1,aWStack_208,0x104);
      uStack_2 = 0;
      iVar2 = (**(code **)(*local_228 + 0x28))(local_228,aWStack_208);
      if ((-1 < iVar2) && (iVar2 = FUN_00461d70(local_228), -1 < iVar2)) {
        FUN_00462640(local_228);
        (**(code **)(*local_228 + 0x40))(local_228,param_1,auStack_218 + 1,&local_21c);
      }
    }
    (**(code **)(*local_228 + 8))(local_228);
  }
  local_224 = 0;
  if (DAT_005bba40 == 0) {
    iVar2 = -0x7fffbffb;
  }
  else if (DAT_005bba44 == '\0') {
    iVar2 = FUN_00570cd0(&local_220,&local_224,1);
  }
  else {
    iVar2 = FUN_00570bd0(&local_220,&local_224,&DAT_005bba44,0,0);
    local_224 = 0x10;
  }
  iVar3 = FUN_00570cd0(&local_220,auStack_218,1);
  if (-1 < iVar3) {
    if ((-1 < iVar2) && (auStack_218[0] < local_224)) {
      auStack_218[0] = local_224;
    }
    iVar3 = _DAT_005ba2a8;
    if ((int)DAT_005bba30 <= (int)(auStack_218[0] & 0xffff)) {
      DAT_005bba34 = 0;
      _DAT_005bba38 = local_220;
      DAT_005bba30 = auStack_218[0] & 0xffff;
    }
  }
  _DAT_005ba2a8 = iVar3;
  uVar1 = DAT_005bba30;
  iVar2 = FUN_00570cd0(auStack_20c,auStack_210,2);
  if (-1 < iVar2) {
    uVar4 = 0;
    iVar2 = 0;
    local_21c = 0;
    if (0 < DAT_005b6568) {
      puVar5 = &DAT_005b6470;
      while (uVar1 != *puVar5) {
        iVar2 = iVar2 + 1;
        puVar5 = puVar5 + 0x20;
        if (DAT_005b6568 <= iVar2) {
          return uVar4;
        }
      }
      _mbscpy(&DAT_005ba2ac,
              (&PTR_s_Sonic_Foundry_Video_Capture_3_0_0058c535_3_005b6468)[iVar2 * 0x20]);
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}


