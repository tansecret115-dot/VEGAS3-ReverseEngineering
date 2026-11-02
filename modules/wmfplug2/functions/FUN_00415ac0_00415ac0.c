/* Module: wmfplug2.dll
   Function: FUN_00415ac0
   Address: 00415ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00415c4c) */
/* WARNING: Removing unreachable block (ram,0x00415c5e) */

uint FUN_00415ac0(int *param_1,uint param_2,LPWSTR param_3,int param_4)

{
  uint uVar1;
  void *_Memory;
  int iVar2;
  int *unaff_EBP;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  size_t unaff_retaddr;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  size_t sStack_22c;
  uint uStack_228;
  int *piStack_224;
  undefined4 uStack_220;
  int iStack_21c;
  undefined4 *puStack_218;
  undefined1 local_214 [12];
  CHAR local_208 [512];
  int iStack_8;
  wchar_t *pwStack_4;
  
  iVar2 = 4;
  uVar1 = 0x80004005;
  bVar5 = true;
  piVar6 = param_1;
  piVar3 = &DAT_0047b640;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar6 == *piVar3;
    piVar6 = piVar6 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar5);
  if (bVar5) {
    uVar1 = WMCreateProfileManager(local_214);
    if (-1 < (int)uVar1) {
      puVar7 = &uStack_228;
      piVar6 = (int *)&DAT_0047c7d0;
      uVar1 = (**(code **)*puStack_218)(puStack_218);
      if (-1 < (int)uVar1) {
        uVar1 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,&DAT_0047b640,&uStack_228);
        if ((-1 < (int)uVar1) && (uVar8 = 0, uStack_228 != 0)) {
          do {
            uStack_220 = 0x104;
            uVar1 = (**(code **)(*unaff_EBP + 0x18))
                              (unaff_EBP,&DAT_0047b640,uVar8,&puStack_218,&uStack_220);
            if (-1 < (int)uVar1) {
              uVar1 = (**(code **)(*unaff_EBP + 0x14))
                                (unaff_EBP,&DAT_0047b640,uVar8,0,&stack0xfffffdc4);
              if (-1 < (int)uVar1) {
                (*(code *)*puRam00000000)(0,&DAT_0047c7f0,&stack0xfffffdc8);
                if (piVar6 != (int *)0x0) {
                  (**(code **)(*piVar6 + 8))(piVar6);
                }
                piVar6 = (int *)0x0;
                uVar1 = (**(code **)(*puVar7 + 0x10))(puVar7,0,&stack0xfffffdc8);
                if (-1 < (int)uVar1) {
                  _Memory = calloc(1,sStack_22c);
                  if (_Memory == (void *)0x0) {
                    uVar1 = 0x8007000e;
                  }
                  else {
                    uVar1 = (*(code *)puRam00000000[4])(0,_Memory,&sStack_22c);
                    if (-1 < (int)uVar1) {
                      iVar2 = 4;
                      bVar5 = true;
                      piVar3 = (int *)((int)_Memory + 0x2c);
                      piVar4 = &DAT_0047c0e8;
                      do {
                        if (iVar2 == 0) break;
                        iVar2 = iVar2 + -1;
                        bVar5 = *piVar3 == *piVar4;
                        piVar3 = piVar3 + 1;
                        piVar4 = piVar4 + 1;
                      } while (bVar5);
                      if (bVar5) {
                        iStack_21c = *(int *)(*(int *)((int)_Memory + 0x44) + 0x40);
                      }
                      else {
                        uVar1 = 0x80004005;
                      }
                    }
                  }
                  if (_Memory != (void *)0x0) {
                    free(_Memory);
                  }
                }
              }
              if ((-1 < (int)uVar1) && (iStack_21c == iStack_8)) {
                wcsncpy(pwStack_4,(wchar_t *)&puStack_218,unaff_retaddr);
                uVar1 = 0;
                break;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uStack_228);
        }
        if (unaff_EBP != (int *)0x0) {
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
        }
      }
      if (piStack_224 != (int *)0x0) {
        (**(code **)(*piStack_224 + 8))(piStack_224);
      }
    }
  }
  else {
    iVar2 = 4;
    bVar5 = true;
    piVar6 = &DAT_0047b630;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *param_1 == *piVar6;
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar5);
    if (bVar5) {
      local_208[0] = '\0';
      uVar1 = FUN_00437130(param_2,local_208,0x104);
      MultiByteToWideChar(0,1,local_208,-1,param_3,param_4);
      param_3[param_4 + -1] = L'\0';
      return uVar1;
    }
  }
  return uVar1;
}


