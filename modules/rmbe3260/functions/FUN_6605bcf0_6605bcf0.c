/* Module: rmbe3260.dll
   Function: FUN_6605bcf0
   Address: 6605bcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6605bcf0(void *this,char *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int local_3c [3];
  int local_30 [3];
  undefined4 *local_24 [3];
  int local_18 [3];
  void *local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = this;
  FUN_6605b650(local_24);
  FUN_6605b670(local_18,this);
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    uVar2 = FUN_6605bfa0(local_18,param_1);
    if (uVar2 != 0xffffffff) {
      local_8 = 1;
      do {
        puVar3 = FUN_6605bf20(local_18,local_30,uVar2);
        FUN_6605bbe0(local_24,puVar3);
        FUN_6605b770(local_30);
        FUN_6605bba0(local_24,param_2);
        uVar5 = 0xffffffff;
        pcVar6 = param_1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        piVar4 = FUN_6605be40(local_18,local_3c,(~uVar5 - 1) + uVar2);
        FUN_6605b900(local_18,piVar4);
        FUN_6605b770(local_3c);
        this = local_c;
      } while ((param_3 != 0) &&
              (uVar2 = FUN_6605bfa0(local_18,param_1), this = local_c, uVar2 != 0xffffffff));
    }
    FUN_6605bbe0(local_24,local_18);
    FUN_6605b8c0(this,local_24[0][-2],local_24[0]);
  }
  FUN_6605b770(local_18);
  FUN_6605b770((int *)local_24);
  return local_8;
}


