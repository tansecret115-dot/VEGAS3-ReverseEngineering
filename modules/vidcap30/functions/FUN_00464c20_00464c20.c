/* Module: vidcap30.exe
   Function: FUN_00464c20
   Address: 00464c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00464c20(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *unaff_EDI;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint local_31c [4];
  CHAR local_30c [248];
  undefined1 auStack_214 [12];
  WCHAR local_208 [244];
  undefined4 uStack_20;
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar5 = 0;
  local_30c[0] = '\0';
  local_208[0] = L'\0';
  if (((param_3 != 1) || (DAT_005bba34 != 0)) && (DAT_005bba64 == 0)) {
    FUN_00464eb0(param_3,local_30c);
    MultiByteToWideChar(0,1,local_30c,-1,local_208,0x104);
    puVar1 = *(undefined4 **)(param_1 + 4);
    uStack_4 = (uint)(ushort)uStack_4;
    if (puVar1 != (undefined4 *)0x0) {
      local_31c[0] = 0;
      iVar5 = (**(code **)*puVar1)(puVar1,&DAT_0058c718,local_31c);
      if (-1 < iVar5) {
        puVar4 = (undefined1 *)0x0;
        SfOem_Init((void **)&stack0xfffffce0,(char *)0x0,(char *)0x0);
        local_31c[0] = 0;
        SfOem_GetBuild((void *)0x0,local_31c,0);
        if ((local_31c[0] == 0) && (DAT_005bba34 == 0)) {
          iVar5 = FUN_004651f0(uStack_4,&stack0xfffffcdc);
          if (iVar5 == 0) {
            puVar4 = &stack0xfffffcdc;
          }
        }
        SfOem_Done((void *)0x0);
        uVar2 = FUN_00464f40(DAT_005bba30);
        iVar5 = _SfLoadIcon_8(DAT_005ba2a0,uVar2);
        *(int *)(param_1 + 200) = iVar5;
        if (iVar5 != 0) {
          (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),iVar5);
        }
        puVar7 = auStack_214;
        piVar6 = (int *)0x1;
        iVar5 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,uStack_8,500,0x160,1,puVar7,puVar4);
        if (*(HGDIOBJ *)(param_1 + 200) != (HGDIOBJ)0x0) {
          DeleteObject(*(HGDIOBJ *)(param_1 + 200));
          *(undefined4 *)(param_1 + 200) = 0;
        }
        if (puVar4 != (undefined1 *)0x0) {
          FUN_00465210(uStack_20,puVar7);
        }
        if (iVar5 == 0) {
          uVar3 = _SfGetString_8(DAT_005ba2a0,0xc56e);
          SfMsgBox(DAT_005ba4bc,0x40,uVar3);
          DAT_005bba64 = 1;
          PostMessageA(DAT_005ba4bc,0x10,0,0);
        }
        (**(code **)(*piVar6 + 8))(piVar6);
      }
    }
    return iVar5;
  }
  return 0;
}


