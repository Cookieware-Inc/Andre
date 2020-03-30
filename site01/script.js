//Button
function Atualizar(){
    // imagens
    var foto = window.document.getElementById ('imagem');

    // Horário
    var agora = new Date ();
    var hora = agora.getHours ()
    var minuto = agora.getMinutes ();
    var segundo = agora.getSeconds ();


    // Mudança de cor do fundo
    var h1 = window.document.querySelector ('h1');
    var p = window.document.querySelector ('p');
    var horario = window.document.querySelector ('div.horas');
    var body = window.document.querySelector ('body');
    var topo = window.document.querySelector ('div.msg');
    if (hora < 10){
        var hora = "0" + hora;
    }
    if (minuto < 10){
        var minuto = "0" + minuto;
    }
    if (segundo < 10){
        var segundo = "0" + segundo;
    }

    //Saída
    horario.innerHTML = `<br>Agora são <strong>${hora}:${minuto}:${segundo}</strong><br>`;
    if (hora >= 12 && hora < 18){
        horario.innerHTML += `<br><strong>Boa tarde</strong>
        <br><img src = "imagens/tarde.png">`;
        body.style.background = 'rgb(255, 235, 99)';
    }else if (hora >= 18 && hora <= 23){
        horario.innerHTML += `<br><strong>Boa noite</strong>
        <br><img src = "imagens/noite.png">`;
        body.style.background = 'rgb(0, 33, 47)';
        h1.style.color = 'white';
        p.style.color = 'white';
    }else if (hora >= 00 && hora < 06){
        horario.innerHTML += `<br><strong>Boa madrugada</strong>
        <br><img src = "imagens/madrugada.png">`;
        body.style.background = 'rgb(0, 0, 0)';
        topo.style.color = 'white';
        h1.style.color = 'white';
        p.style.color = 'white';
    }else if (hora >= 06 && hora < 12){
        horario.innerHTML += `<br><strong>Bom dia</strong>
        <br><img src = "imagens/dia.png">`;
        body.style.background = 'rgba(144, 215, 245, 0.74)';
    }
}
window.setInterval ('Atualizar()', 1000)
