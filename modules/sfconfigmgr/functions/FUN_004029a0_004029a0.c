/* Module: sfconfigmgr.dll
   Function: FUN_004029a0
   Address: 004029a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00402a5a) */

int FUN_004029a0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined4 *local_8;
  
  puVar6 = &stack0xfffffffc;
  uVar3 = FUN_0040a6e0(0);
  local_8 = (undefined4 *)0x0;
  param_2 = (undefined4 *)FUN_0040aa50((int)param_1,param_2,&DAT_0041a5f8,&local_8);
  if ((int)param_2 < 0) {
    return (int)param_2;
  }
  switch(uVar3 & 0xf) {
  case 1:
    pwVar4 = L"i486";
    break;
  case 2:
    pwVar4 = L"Pentium";
    break;
  case 3:
    pwVar4 = L"Pentium Pro";
    break;
  case 4:
    pwVar4 = L"Pentium II";
    break;
  case 5:
    pwVar4 = L"Pentium III";
    break;
  case 6:
    pwVar4 = L"Pentium 4";
    break;
  default:
    pwVar4 = L"Generic";
  }
  if (pwVar4 != (wchar_t *)0x0) {
    param_2 = (undefined4 *)FUN_00402790(param_1,local_8,(int *)L"class",pwVar4);
  }
  puVar7 = &stack0xfffffffc;
  if (-1 < (int)param_2) {
    uVar8 = FUN_0040a4c0();
    if (-1 < (int)uVar8) {
      cpuid_basic_info(0);
      puVar6 = (undefined1 *)
               CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),(short)&stack0xfffffffc);
      uVar1 = *(undefined4 *)(puVar6 + -0x10);
      puVar6[-0x20] = 0;
      puVar6[-0x2c] = (char)uVar1;
      puVar6[-0x29] = (char)((uint)uVar1 >> 0x18);
      uVar2 = *(undefined4 *)(puVar6 + -0x14);
      puVar6[-0x2b] = (char)((uint)uVar1 >> 8);
      puVar6[-0x2a] = (char)((uint)uVar1 >> 0x10);
      puVar6[-0x28] = (char)uVar2;
      puVar6[-0x25] = (char)((uint)uVar2 >> 0x18);
      uVar1 = *(undefined4 *)(puVar6 + -0x18);
      puVar6[-0x27] = (char)((uint)uVar2 >> 8);
      puVar6[-0x26] = (char)((uint)uVar2 >> 0x10);
      puVar6[-0x24] = (char)uVar1;
      puVar6[-0x21] = (char)((uint)uVar1 >> 0x18);
      puVar6[-0x23] = (char)((uint)uVar1 >> 8);
      puVar6[-0x22] = (char)((uint)uVar1 >> 0x10);
      if (puVar6 != (undefined1 *)0x2c) {
        MultiByteToWideChar(0,1,puVar6 + -0x2c,-1,(LPWSTR)(puVar6 + -0x4c),0x10);
        *(undefined2 *)(puVar6 + -0x2e) = 0;
        iVar5 = FUN_00402790(*(int **)(puVar6 + 8),*(undefined4 **)(puVar6 + -4),
                             (int *)&DAT_0041a55c,puVar6 + -0x4c);
        *(int *)(puVar6 + 0xc) = iVar5;
      }
      param_1 = *(int **)(puVar6 + 8);
    }
    puVar7 = puVar6;
    if (-1 < *(int *)(puVar6 + 0xc)) {
      GetSystemInfo((LPSYSTEM_INFO)(puVar6 + -0x70));
      FUN_00406090(puVar6 + -0x28,"%u");
      MultiByteToWideChar(0,1,puVar6 + -0x28,-1,(LPWSTR)(puVar6 + -0x40),10);
      *(undefined2 *)(puVar6 + -0x2e) = 0;
      iVar5 = FUN_00402790(param_1,*(undefined4 **)(puVar6 + -4),(int *)L"numbercpus",puVar6 + -0x40
                          );
      *(int *)(puVar6 + 0xc) = iVar5;
      if (-1 < iVar5) {
        if ((puVar6[-8] & 0x10) != 0) {
          *(undefined4 *)(puVar6 + 8) = 0;
          iVar5 = FUN_0040aa50((int)param_1,*(undefined4 **)(puVar6 + -4),&DAT_0041a538,
                               (undefined4 *)(puVar6 + 8));
          *(int *)(puVar6 + 0xc) = iVar5;
          if (iVar5 < 0) goto LAB_00402bbc;
          (**(code **)(**(int **)(puVar6 + 8) + 8))(*(int **)(puVar6 + 8));
        }
        if ((puVar6[-8] & 0x20) != 0) {
          *(undefined4 *)(puVar6 + 8) = 0;
          iVar5 = FUN_0040aa50((int)param_1,*(undefined4 **)(puVar6 + -4),&DAT_0041a530,
                               (undefined4 *)(puVar6 + 8));
          *(int *)(puVar6 + 0xc) = iVar5;
          if (-1 < iVar5) {
            (**(code **)(**(int **)(puVar6 + 8) + 8))(*(int **)(puVar6 + 8));
          }
        }
      }
    }
  }
LAB_00402bbc:
  (**(code **)(**(int **)(puVar7 + -4) + 8))(*(int **)(puVar7 + -4));
  return *(int *)(puVar7 + 0xc);
}


