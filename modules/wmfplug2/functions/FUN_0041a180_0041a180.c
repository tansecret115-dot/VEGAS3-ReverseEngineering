/* Module: wmfplug2.dll
   Function: FUN_0041a180
   Address: 0041a180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041a180(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  int iStack_660;
  int iStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  WCHAR aWStack_650 [31];
  undefined2 uStack_612;
  WCHAR local_610 [259];
  undefined2 local_40a;
  WCHAR aWStack_408 [259];
  undefined2 uStack_202;
  undefined2 uStack_4;
  
  if (*(char *)(param_1 + 0x288) != '\0') {
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x288),-1,local_610,0x104);
    local_40a = 0;
    (**(code **)(*param_2 + 0x18))(param_2,0,L"Title",1,local_610,0x208);
  }
  iVar3 = 0;
  if (*(char *)(param_1 + 0x38c) != '\0') {
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x38c),-1,local_610,0x104);
    local_40a = 0;
    (**(code **)(*param_2 + 0x18))(param_2,0,L"Author",1,local_610,0x208);
  }
  if (*(char *)(param_1 + 0x490) != '\0') {
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x490),-1,local_610,0x104);
    local_40a = 0;
    (**(code **)(*param_2 + 0x18))(param_2,0,L"Copyright",1,local_610,0x208);
  }
  if (*(char *)(param_1 + 0x594) != '\0') {
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x594),-1,local_610,0x104);
    local_40a = 0;
    (**(code **)(*param_2 + 0x18))(param_2,0,L"Description",1,local_610,0x208);
  }
  if (*(char *)(param_1 + 0x698) != '\0') {
    MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x698),-1,local_610,0x104);
    local_40a = 0;
    (**(code **)(*param_2 + 0x18))(param_2,0,L"Rating",1,local_610,0x208);
  }
  if ((*(int *)(param_1 + 0x268) != 0) && (0 < *(int *)(param_1 + 0x270))) {
    iStack_660 = 0;
    do {
      puVar2 = (uint *)(*(int *)(param_1 + 0x26c) + iVar3);
      uVar1 = *puVar2;
      lVar4 = __allmul(uVar1,(int)uVar1 >> 0x1f,10000,0);
      MultiByteToWideChar(0,1,(LPCSTR)(puVar2 + 1),-1,aWStack_650,0x20);
      uStack_612 = 0;
      MultiByteToWideChar(0,1,(LPCSTR)(*(int *)(param_1 + 0x26c) + 0x24 + iVar3),-1,aWStack_408,
                          0x203);
      uStack_4 = 0;
      uStack_654 = (undefined4)((ulonglong)lVar4 >> 0x20);
      uStack_658 = (undefined4)lVar4;
      (**(code **)(*param_2 + 0x34))(param_2,aWStack_650,aWStack_408,uStack_658,uStack_654);
      iVar3 = iVar3 + 0x328;
      iStack_660 = iStack_660 + 1;
    } while (iStack_660 < *(int *)(param_1 + 0x270));
  }
  if ((*(int *)(param_1 + 0x274) != 0) && (0 < *(int *)(param_1 + 0x27c))) {
    iStack_660 = 0;
    iStack_65c = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x278);
      uVar1 = *(uint *)(iVar3 + iStack_65c);
      lVar4 = __allmul(uVar1,(int)uVar1 >> 0x1f,10000,0);
      MultiByteToWideChar(0,1,(LPCSTR)(iVar3 + iStack_65c + 4),-1,aWStack_408,0x104);
      uStack_202 = 0;
      uStack_654 = (undefined4)((ulonglong)lVar4 >> 0x20);
      uStack_658 = (undefined4)lVar4;
      (**(code **)(*param_2 + 0x24))(param_2,aWStack_408,uStack_658,uStack_654);
      iStack_660 = iStack_660 + 1;
      iStack_65c = iStack_65c + 0x208;
    } while (iStack_660 < *(int *)(param_1 + 0x27c));
  }
  return;
}


