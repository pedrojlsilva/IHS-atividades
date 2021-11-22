SECTION .text

global bubblesort

bubblesort:
    enter 0,0
    mov esi, [ebp + 8]  ;index 0 do array passado
    mov ecx, [ebp + 12] ;contador do loop interno do bubblesort
    dec ecx             ; vai de 0 ate size-1
    push ebx
    mov ebx, 0          ;contador do loop externo
    mov eax, 0          ;contador do loop interno

loopexterno:
    mov edx, ecx

loopinterno: 
    mov eax, [esi + 4*ecx]
    mov ebx, [esi + 4*edx]
    cmp eax, ebx ; Comparar os valores da iteração atual
    jg noswap

    ;swap
    mov [esi + 4*edx], eax
    mov [esi + 4*ecx], ebx 

noswap: 
    cmp edx, 0
    je callloopexterno
    
    dec edx
    jmp loopinterno

callloopexterno:
    loop loopexterno ; ecx--


fim:
    pop ebx
    leave
    ret